#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool brute ( vector<int> arr , int k) {
  int n  = arr.size();

  for(int i =0; i < n ; i++ ){
     for(int j =i+1 ; j < n ;j++){
        if(arr[i] + arr[j] == k ){
            return true;
        }
     }
  }
  return false;

}

// using hashing  for unordered n^2 & for ordered n logn 
bool better (vector<int> arr , int k ) {
    int n = arr.size();
    unordered_map<int ,int> mpp ;
    for(int i =0; i< n ; i++) {
        int num = arr[i];
        int moreNeeded = k - num;
        if(mpp.find(moreNeeded) != mpp.end()){
            return true;
        }
        mpp[num] = i;
    }

    return false;
}


//without using space complexity n logn
bool optimal(vector<int> arr , int k){
    int n  = arr.size();
    int i = 0 , j = n-1;
    sort(arr.begin() , arr.end());
    while( i < j){
        int sum = arr[i] + arr[j];
        if(sum == k ) return true;
        if(sum < k)  i++;
        else j--;

    }
    return false;
}

int main() {

    vector<int> arr = {2,6,5,8,11};
    int k = 14;

    if(brute(arr,k)){
        cout << "yes" <<endl;
    }
    else{
        cout << "no"<<endl;;
    }
    if(better(arr,k)){
        cout << "yes"<<endl;;
    }
    else{
        cout << "no"<<endl;;
    }
    if(optimal(arr,k)){
        cout << "yes"<<endl;;
    }
    else{
        cout << "no"<<endl;;
    }

}
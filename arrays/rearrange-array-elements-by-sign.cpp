#include <iostream>
#include <vector>
using namespace std;


vector<int> brute(vector<int> arr){
    int n = arr.size();
    vector<int> pos = {};
    vector<int> neg = {};

    for(int i  = 0; i < n; i++ ){
      if(arr[i] < 0){
        neg.push_back(arr[i]);
      }
      else {
        pos.push_back(arr[i]);
      }
    }

    for(int i  = 0; i < n/2; i++ ){
        arr[2*i] = pos[i];
        arr[2*i +1] = neg[i];
    }

    return arr;
}

vector<int> optimal(vector<int> arr) {
    int n = arr.size();
    vector<int> ans(n,0);
    int pos = 0, neg = 1;

    for(int i  = 0; i < n ; i++ ){
        if(arr[i] > 0) {
           ans[pos] = arr[i];
           pos += 2;
        }
        else{ 
            ans[neg] = arr[i];
            neg +=2;
        }
    }

    return ans;
}


int main(){    

   vector<int> arr = {1,2,-4,-3};
   vector<int> ans =  brute(arr);
   vector<int> ans2 =  optimal(arr);

   for(auto el : ans) {
    cout << el << "  ";
   }
   cout<< endl;
   for(auto el : ans2) {
    cout << el << "  ";
   }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int  findFirstOcc(vector <int > arr , int k ){
   int n = arr.size();
   int low = 0,  high = n-1 , ans = -1;
   while (low <= high)
   {
    int mid = (low + high) /2;
    if(arr[mid] == k){
       ans = mid;
       high = mid-1;
    }
    else if(arr[mid] > k){
        high = mid-1;
    }
    else{
        low = mid+1;
    }
   }

   return ans;
   
}

int  findLastOcc(vector <int > arr , int k ){
   int n = arr.size();
   int low = 0,  high = n-1 , ans = -1;
   while (low <= high)
   {
    int mid = (low + high) /2;
    if(arr[mid] == k){
       ans = mid;
       low = mid+1;
    }
    else if(arr[mid] > k){
        high = mid-1;
    }
    else{
        low = mid+1;
    }
   }

   return ans;
   
}


int main () {
    
    vector<int> arr = {25,25,56,787,9898};
    cout << findFirstOcc(arr,25) << endl;
    cout << findLastOcc(arr,25);
    return  0;

}
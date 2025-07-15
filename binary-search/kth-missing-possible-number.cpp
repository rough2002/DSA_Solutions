#include <iostream>
#include <vector>

using namespace std;

int findMissingNumberBrute(vector<int> arr,int k ) {
   int n  = arr.size();
   for(int i = 0 ; i < n ; i++){
    if(arr[i] <= k) k++;
    else break;
   }
}

int findMissingNumberOptimized(vector<int> arr, int k ){
   int n  = arr.size();
   int l = 0 , h = n-1;
   while(l <= h) {
    int mid = (l+h)/2;
    int missing = arr[mid] - mid+1 ;
    if(missing < k ){
        l = mid+1;
    }
    else{
        h = mid-1;
    }
   }
   int missingNo = arr[h] + (k - (arr[h] - h+1));  // or low+k 
   return missingNo;


}

int main(){


    return 0;
}
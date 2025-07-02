#include <iostream>
#include <vector>
using namespace std;

int findSmallestElement(vector <int > arr , int k ) {
   int n = arr.size();
   int low = 0,  high = n-1 , ans = INT_MAX;
   while (low <= high){
   int mid = (low + high) /2;

   //further optimization
   if(arr[low] < arr[high]){
    ans = min(ans,arr[low]);
    break;
   }

   // right half is sorted
   if(arr[mid] < arr[high]){
     ans =  min(arr[mid] , ans);
     high = mid - 1;
   }
   // left half sorted
   else {
     ans = min(arr[low] , ans);
     low = mid + 1;
   }
   }
   return ans;
}


int main( ) {
   vector<int> arr ={3,4,5,6,1,2};
   cout <<findSmallestElement(arr,6);
}

#include <iostream>
#include <vector>
using namespace std;

int findElement(vector <int > arr , int k ) {
  int n = arr.size();
   int low = 0,  high = n-1 , ans = -1;
   while (low <= high){
    int mid = (low + high) /2;
    if(arr[mid] == k){
       return mid;
    }
   
    if(arr[low] < arr[mid]){
         if(k < arr[mid] && k > arr[low]) {
            high = mid-1;
         }
         else {
            low = mid+1;
         }
    }
    else {
       if(k > arr[mid] && k < arr[high]) {
          low = mid+1;
         }
         else {
            high = mid-1;
         }
    }

   }
   
   return -1;
}


int main( ) {
   vector<int> arr ={3,4,5,6,1,2};
   cout <<findElement(arr,6);
}

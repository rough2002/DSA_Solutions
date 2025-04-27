#include <iostream>
using namespace std; 

// Approach
// Divide and merge

    // 0,1,2,3    4,5,6
// [1,2,4,6]  [3,5,7]
void merge (int arr[] , int low , int mid , int high) {
 int temp [high+1];
 int i=low;
 int j=mid+1;
 int k=0;

 while(i <= mid && j <= high ){
 if(arr[i] <  arr[j]) {
   temp[k] = arr[i];
   i++;
   k++;
 }
 else {
    temp[k] = arr[j];
    j++;
    k++;
 }
 }
 while (i <= mid){
    temp[k] = arr[i];
    i++;
    k++;
 }

 while (j <= high){
    temp[k] = arr[j];
    j++;
    k++;
 }

 for(int l = low ; l<=high ;l++){
  arr[l]  =  temp[l - low];
  k++;}
}

void mergeSort(int arr[] , int low , int high){
    if(low == high) return;
    int mid = (low+high)/2 ;
    mergeSort(arr,low , mid);
    mergeSort(arr , mid+1 , high);
    merge(arr , low ,mid ,high);
}


int main() {
    int arr [] = {7,6,5,4,3,2,1};
    mergeSort( arr,0,6 );
    for (auto el : arr) {
        cout <<  el << " " ;
    }
    return 0;
}
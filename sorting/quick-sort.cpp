#include <iostream>
using namespace std;

// Approach
// Find pivot put at it right place in the sorted order
// make all the elements to its left array smaller
// make all the elements to its right array greater
// repeat the same process in the left and right array

int  findPartition(int arr[],int low , int high){
   int pivot = low;
   int i = low;
   int j = high;

   while(i < j) {

    while(arr[pivot] >= arr[i] && i <= high){
        i++;
    }

    while(arr[pivot] <= arr[j] && j>=low){
        j--;
    }

    if(i < j){
        swap(arr[i] ,arr[j]);
    }

   }

   swap(arr[pivot] ,arr[j]);
   return j;
   
} 

void quickSort(int arr[],int low , int high) {
    if(low < high) {
        int partition = findPartition(arr,low,high);
        // mistake while calling again do take pivot into account , i mean quickSort(arr,low,partition) ❌
        quickSort(arr,low,partition-1);
        quickSort(arr,partition+1,high);
    }
}


int main() {
    int arr [] = {4,6,5,7,3,2,1};
    quickSort(arr,0,6);
    for (auto el : arr) {
        cout <<  el << " " ;
    }
    return 0;
}
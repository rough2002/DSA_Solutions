#include <iostream>
using namespace std;

// Approach
// Pick up every element and then place it at its correct position
// compare and right shift until you find the right place

// Time Complexity : again summation of n natural no.s  

void insertionSort(int arr[] , int size) {
   for(int i = 0;  i < size ; i++ ) {
     int j = i ;
     while (j > 0 && arr[j] < arr[j-1]){
        swap(arr[j] , arr[j-1]);
        j--;
     }
   }
}

int main() {
 int arr[] = {5,3,1,6,110};
    insertionSort(arr,5);
    for(auto el : arr) {
        cout <<el<<" " ;
    }
    return 0;
}
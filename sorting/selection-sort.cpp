#include <iostream>
using namespace std;

// Approach
//    1.  Search for the smallest element in the array
//    2.  Place it in exchange it with starting position
//    3.  do this until the whole array gets sorted

/// @brief 
/// @param arr 
void selectionSort(int arr[] , int size) {

    for(int i =0 ; i < size-2 ; i++) {
        int smallest = i;
        for(int j = i+1 ; j< size; j++) {
          if(arr[j] < arr[smallest]){
            smallest = j;
          }
        }
        swap(arr[i], arr[smallest]);
    }
}

int main ( ) {
    int arr[] = {5,3,1,6,110};
    selectionSort(arr,5);
    for(auto el : arr) {
        cout <<el<<" " ;
    }
    return 0;
}
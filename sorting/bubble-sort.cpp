#include <iostream>
using namespace std;

// Approach 
// Compare & Swap adjacent elements till the largest one comes at the end of the array

void bubbleSort(int arr[] , int size) {
    for (int i = 0; i<size-1 ; i++) {
       for(int j = 0; j < size - i- 1;  j++) {
        if(arr[j] > arr[j+1]) {
            swap(arr[j] , arr[j+1]);
        }
       }
    }
}

int main(){
    int arr[] = {5,3,1,6,110};
    bubbleSort(arr,5);
    for(auto el : arr) {
        cout <<el<<" " ;
    }
    return 0;
}
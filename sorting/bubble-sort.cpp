#include <iostream>
using namespace std;

// Approach 
// Compare & Swap adjacent elements till the largest one comes at the end of the array

// time complexity sum of naturatl no.s  n + n-1 + n-2 ...
// so (n^2) which is worst case
// but it can be optimized o(n) if the array is already in sorted position (imp can be asked)

void bubbleSort(int arr[] , int size) {
    for (int i = 0; i<size-1 ; i++) {
       bool swapped = false;   // for optimization
       for(int j = 0; j < size - i- 1;  j++) {
        if(arr[j] > arr[j+1]) {
            swap(arr[j] , arr[j+1]);
            swapped = true;
        }
       }
       if(!swapped){      // for optimization
        break ;
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
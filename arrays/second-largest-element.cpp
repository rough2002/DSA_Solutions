#include <iostream>
using namespace std;

// Brute   : Sort the array & start comparing from the last (n*logn)
// Better  : First find the largest then find the second largest element (2n)
// Optimal : Below is the optimal approach which (n)


// Assumptions 
// 1. array has minimum of 2 elements and every element is unique 
// 2. there is no negative element

int secondLargest ( int arr [] , int n ) {
    int largest = arr[0];
    int slargest = -1;
    
    for(int i = 1; i < n ; i++) {
        if(largest < arr[i]){
            slargest = largest;
            largest = arr[i];
        }
    }

    return slargest;
}

int main () {
    int arr[] = {5,3,1,6,110};
    cout  << "Second largest element is : " << secondLargest(arr,5) ;
    return 0;
}
#include <iostream>
using namespace std;

// Approach go on to every element & check if previous is smaller than him and next is greater than him

bool checkSorted(int arr [] , int n){
    if(n <= 1) return true;
    
    for (int i = 1; i < n-1; i++ ){
        if(arr[i-1] < arr[i] && arr[i] < arr[i+1]){
            continue;
        }
        else {
            return false;
        }
    }

    return true;

}

int main () {
    int arr1[] = {1,3,34,5,5,6,};
    int arr2[] = {1,2,3,4,5,6};

    cout << checkSorted(arr1,6) << endl;
    cout << checkSorted(arr2,6) << endl;

}
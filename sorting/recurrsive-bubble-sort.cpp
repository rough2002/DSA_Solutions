#include <iostream>
using namespace std;

void recurrsiveBubbleSort(int arr[], int n) {

    if(n ==1) return;

    for(int i =0; i< n-1; i++) {
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    recurrsiveBubbleSort(arr,n-1);
}


int main(){
    int arr[] = {5,3,1,6,110};
    recurrsiveBubbleSort(arr,5);
    for(auto el : arr) {
        cout <<el<<" " ;
    }
    return 0;
}
#include <iostream>
using namespace std;

void recurrsiveInsertionSort(int arr [] ,int i , int n){
  if(i == n) return ;
  int j = i ;
  while( j > 0 && arr[j] < arr[j-1]){
    swap(arr[j],arr[j-1]);
    j--;
  }
  recurrsiveInsertionSort(arr,i+1, 5);

}

int main(){
    int arr[] = {5,3,1,6,110};
    recurrsiveInsertionSort(arr,0,5);
    for(auto el : arr) {
        cout <<el<<" " ;
    }
    return 0;
}
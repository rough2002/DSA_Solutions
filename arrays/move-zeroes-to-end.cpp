#include <iostream>
#include <vector>
using namespace std;


void moveZeroesBrute(int arr[] , int n ){
    vector<int> temp;
    for(int i  =0; i < n; i++) {
        if(arr[i] !=0 ){
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0; i < n ; i++ ){
        if(i < temp.size()){
            arr[i] = temp[i];
        }
        else {
            arr[i] = 0;
        }
    }
}

void moveZeroesOptimal(int arr[] , int  n ) {
  int  j= -1;
  for(int i =0 ;i < n ; i++) {
    if(arr[i] == 0) {
        j =i;
        break;
    }
  }

  if(j == -1) return;

  for(int i = j+1 ; i < n ; i++) {
    if(arr[i] != 0) {
        swap(arr[i], arr[j++]);
    }
  }
}


/*
1: i!=0 i++


*/



int main() {
   int arr [] = {0,0,13,0,45,5,0};
   int arr2 [] = {1, 0, 3, 0, 5};
   moveZeroesBrute(arr ,7);
   moveZeroesOptimal(arr2 ,5);

   for(auto el : arr) {
    cout << el << " ";
   }
   cout  << endl;
   for(auto el : arr2) {
    cout << el << " ";
   }

    return 0;
}
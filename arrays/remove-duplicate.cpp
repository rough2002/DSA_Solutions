#include <iostream>
using namespace std;

///  Approach
//  array will always be sorted in the problem
//  Brute :  take use of set , in set insert take Logn time complexity 
//  Optimial : pickup initial element place it in 0 index then look for different one then place it in the next index


int removeDuplicates(int arr[], int n) {
    int i = 0;
    for (int j =0 ; j< n ; j++) {
       if(arr[j] != arr[i]) {
            arr[++i] = arr[j];
       }
    }
    return i + 1;
}

int main() {
    int arr[] = {1,1,1,2,3,3,3,4,4};
  cout <<   removeDuplicates(arr,9) << endl;

  for(auto el  : arr) {
    cout << el << " ";
  }

    return 0;
}
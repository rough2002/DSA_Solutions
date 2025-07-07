#include <iostream>
#include <vector>

using namespace std;

int findPeak(vector<int> arr){

    int n  = arr.size();
    int  l= 0 , h = n-1 ;

    if(n == 1) return arr[0];
    if(arr[0] > arr[1]) return arr[0];
    if(arr[n-1] > arr[n-2]) return arr[n-1];
    
    while( l <= h ){
      int mid = (l +h)/2 ;
      if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
        return arr[mid];
      }
      // eleminate left half because peak is on right
      if(arr[mid-1] < arr[mid]) {
        l = mid+1;
      }

      // eliminate right half
      else {
        h = mid-1;
      }

      return -1;

    }



    return -1;
}



int main() {


    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// with brute sorting  N logN

// with better hashing
void better(vector<int> &arr){
    int n = arr.size();
    int cnt0 =0  , cnt1 =0 , cnt2 = 0 ;

    for(auto el :arr) {
        if(el == 0) cnt0++;
        else if (el == 1) cnt1++;
        else cnt2++;
    }

    for(int i  = 0; i  < cnt0; i++ ){
        arr[i] = 0;
    }
    
    for(int i  = cnt0; i  < cnt0 +cnt1; i++ ){
        arr[i] = 1;
    }

    for(int i  = cnt0+ cnt1; i  < n; i++ ){
        arr[i] = 2;
    }

}


// using dutch national flag algo 
// rules
// 1. 0 to low-1  -> 0
// 2. low to mid
// 3.


void optimal(vector<int> &arr){
    int n = arr.size();
    int low =0  , mid = 0 , high = n-1;

    while(mid <= high) {
        if(arr[mid] == 0) {
          swap(arr[low] , arr[mid]);
          low++;
          mid++;
        }
        else if (arr[mid] == 1){
          mid++;
        }
        else {
            swap(arr[high] , arr[mid]);
            // mid++ ;    this is a brutal mistake
            high--;
        }
    }
}



int main(){
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    vector<int> arr2 = {0, 2, 1, 2, 0, 1};
    better(arr);
    cout << "After sorting:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    optimal(arr2);
    cout << "After sorting  2:" << endl;
    for(auto el : arr2){
      cout << el << " ";
    }

    return 0;
}
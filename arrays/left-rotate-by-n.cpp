#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 // 0,1,2,3,4
// [3,4,5,1,2] , 5 , 2,
void rotateByNBrute(int arr[] ,int n , int d) {

   d = d % n;
   vector<int> temp;

   for(int i = 0 ; i < d ; i++) {
    temp.push_back(arr[i]);
   }

   for(int i = d; i < n  ; i++) {
    arr[i-d] = arr[i];
   }

   for(int i = n-d ; i < n ; i++) {
   arr[i] = temp[i  - (n-d)];
   }
   
}

 // 0,1,2,3,4
// [3,4,5,1,2] , 5 , 2,
// [1,2,3,4,5]
// space optimization
void rotateOptimized(int arr[] , int  n , int d) {
// [2,1,5,4,3]
 std::reverse(arr,arr+d);
for(int i  =0 ; i <n ; i++) {
    cout << arr[i] << "  ";
}
cout<<  endl ; 
 std::reverse(arr+d,arr+n);
 for(int i  =0 ; i <n ; i++) {
    cout << arr[i] << "  ";
}
cout<<  endl ; 
 std::reverse(arr , arr+n);
 for(int i  =0 ; i <n ; i++) {
    cout << arr[i] << "  ";
}
cout<<  endl ; 
     
}



int main() {
    int arr [] = {1,2,3,4,5};
    int arr2 [] = {1,2,3,4,5};
    rotateByNBrute(arr,5,2);
    rotateOptimized(arr2,5,2);
    for(auto el : arr) {
        cout << el << " ";
    }
    cout << endl;
    for(auto el : arr2) {
        cout << el << " ";
    }
}
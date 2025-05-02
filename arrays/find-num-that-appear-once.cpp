#include <iostream>
#include <map>
using namespace std;

int brute(int arr [] , int n){
   for(int i =0 ; i < n ;i++) {
     int count =0;
     for(int j =0 ; j < n; j++) {
        if(arr[i] == arr[j]){
            count++;
        }
     }
     if(count == 1 ) return arr[i];
   }

    return -1;
}

// use hashing map based not array based
int better(int arr[] , int n) {
    map <int , int > hash ;
    for(int i =0; i < n ; i++ ) {
        hash[arr[i]]++;
    }
    for(auto el : hash){
        if(el.second == 1) return el.first;
    }
    return -1;
}

//using xor
int optimal(int arr [] , int n ){
    int res = 0;
    for(int i = 0;i < n ;i++) {
        res = res ^ arr[i];
    }
    return res;
}

int main() {
    int  arr[] = {4,1,2,1,2};
    cout << brute(arr,5) << endl;
    cout << better(arr,5) << endl;
    cout << optimal(arr,5) << endl;
    return 0;
}
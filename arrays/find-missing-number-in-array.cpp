#include <iostream>
#include <vector>
using namespace std;

int findMissingBrute(int arr[] , int n ) {
   bool flag = false;
   for(int i = 1; i<=n ; i++) {
       for(int j = 0 ; j < n ; j++) {
        if( i == arr[j]){
            flag = true;
            break;
        }
       }

       if(!flag){
        return i;
       }
   }
   return -1;
}


//using hashing
int findMissingBetter(int arr [] , int n ) {
    vector<int> freq(n+1,0);

    for(int i =0 ; i< n; i++){
        freq[arr[i]] = 1;
    }

    for(int i =1 ; i<= n+1; i++){
        if(freq[i] == 0){
            return i;
        }
    }

    return -1;
}

//mathematical approach
int findMissingOptimal1(int arr [], int n ) {
    int sum1  = ((n) * (n+1))/2;
    int sum2  = 0;
    for(int i =0 ; i< n-1; i++){
        sum2 += arr[i];
    }

    return sum1 - sum2;
}

// xor approach
int findMissingOptimal2(int arr [] , int n ) {
    int xor1 = 0;
    int xor2 = 0;


    for(int i =0 ; i< n-1; i++){
        xor1 = xor1 ^ arr[i];
        xor2 =  xor2 ^  (i+1);
    }

    //for xoring with n
    xor2 = xor2 ^ n;

    return  (xor1^xor2);
}



int main() {
    int arr [] = {2,3,4};
    cout << findMissingBrute(arr,3) <<endl;
    cout << findMissingBetter(arr,3) <<endl;
    cout << findMissingOptimal1(arr,4) <<endl;
    cout << findMissingOptimal2(arr,4) <<endl;

    return 0 ;
}
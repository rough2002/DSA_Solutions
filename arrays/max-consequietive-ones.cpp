#include <iostream>
using namespace std;

int maxConseq1(int arr[] , int n){
    int count = 0;
    int tempCount = 0;
    for(int i =0; i <n ; i++ ){

        if(arr[i] == 1 ) {
           tempCount++;
        }
        else {
            tempCount = 0;
        }
        count  = max(count ,tempCount);
    }
    return count;
}


int main(){
    int arr [] = {1, 1, 0, 1, 1, 1};
    cout <<  maxConseq1(arr, 6);
    return 0;

}
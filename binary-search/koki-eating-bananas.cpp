#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int findMax(vector<int> arr) {
    int ans = arr[0];
    for(int el : arr){
       ans = max(el,ans);
    }
    return ans;
}

int calHours(vector<int> arr , int num){
    int totalHours = 0 ;
    for(int el :arr) {
       totalHours += ceil((double)(el)/(double)(num));
    }
    return totalHours;
}

int findMinBananas(vector<int> arr , int hours){
    int l = 0 , h = findMax(arr);
    while (l<=h)
    {
        int mid = (l+h)/2;
        int totalhours = calHours(arr ,mid);
        if(totalhours > hours){
            h = mid - 1;
        }
        else{

            l = mid+1;
        }

    }
    return l ;
}

int main() {
    
    
    return 0;
}
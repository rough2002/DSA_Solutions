#include <iostream>
#include <vector>

using namespace std;

int findMax(vector<int> arr) {
    int ans = INT_MIN;
    for(int el : arr){
       ans = max(el,ans);
    }
    return ans;
}

bool checkSum(vector<int> arr , int divisor,int limit){
   int sum= 0 ;
   for(int el : arr) {
      sum += (el/divisor);
   }
    return sum <= limit;

}

int findSmallestDivisor(vector<int> arr,int limit){
   int l = 1 , h = findMax(arr);

   while(l <= h ) {
    int mid = (l+h)/2;
    if(checkSum(arr,mid,limit)) {
        h = mid-1;
    }
    else{
        l= mid + 1;
    }
   }

    
}


int main () {

    return 0;
}
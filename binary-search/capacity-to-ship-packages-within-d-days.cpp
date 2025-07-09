#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> arr) {
    int ans = INT_MAX;
    for(int el : arr){
       ans = min(el,ans);
    }
    return ans;
}


int sumOfElements(vector<int> arr) {
    int ans = 0;
    for(int el : arr){
       ans += el;
    }
    return ans;
}

/// @brief 
/// @param arr 
/// @param c capacity
/// @param d days
/// @return 
bool possible(vector<int> arr , int c , int d){
    int counter =0;
    int totalDays= 1;
    for(int i = 0; i< arr.size() ;i++) {
        if(counter +  arr[i] <= c){
           counter += arr[i];
        }else{
           counter = arr[i];
           totalDays++;
        }
    }
    return totalDays <= d;
}


int findMinimumCapacity(vector<int> arr , int d) {
    if(d==1) return sumOfElements(arr);
    int l = findMin(arr) , h = sumOfElements(arr);

    while(l <=h) {
       int mid = (l+h)/2;

       if(possible(arr,mid,d)){
         l = mid+1;
       }
       else{
        h = mid-1;
       }
    }


}



int main(){

    
    return 0;
}
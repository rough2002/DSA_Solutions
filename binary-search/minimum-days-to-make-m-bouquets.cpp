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

int findMin(vector<int> arr) {
    int ans = INT_MAX;
    for(int el : arr){
       ans = min(el,ans);
    }
    return ans;
}

/// @brief 
/// @param arr 
/// @param m bouquets
/// @param k roses
/// @param d days
/// @return 
bool possible(vector<int> &arr, int m , int k , int d){
    int totalRoses = 0;
    int counter = 0;
    int noOfB = 0;
    for(int i =1; i< arr.size(); i++) {
       if(arr[i] <= d) {
           counter++;
       }
       else {
           noOfB += (counter/k);
           counter = 0;
       }
    }
     noOfB += (counter/k);
     return noOfB >= m;

}

/// @brief 
/// @param arr 
/// @param m bouquets
/// @param k roses
/// @return 
int findDays (vector<int> arr ,int m , int k){
  if(m*k > arr.size()) return -1;
  int l = findMin(arr) ,h = findMax(arr);

  while (l <= h )
  {
    int mid = (l+h)/2;
    if(possible(arr,m,k,mid)){
        h = mid-1;
    }
    else{
        l = mid+1;
    }
  }
  return l;
}





int main( ){


    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int findKRotation(vector<int> arr){
    int n = arr.size();
    int l = 0 , h = n-1 , s  = INT_MAX , ans = 0;
    


    while (l <= h)
    {
     int mid = (l+h)/2;
     // right half sorted
    if (arr[l] <= arr[h]) {
            if (arr[l] < ans) {
                ans = l;
                s = arr[l];
            }
            break;
        }

     if(arr[mid] < arr[h]){
        if(arr[mid] < s){
           s = arr[mid];
           ans = mid;
        }
        h = mid -1;
     }
     // left half sorted
     else {
       if(arr[l] < s){
          s = arr[l];
           ans = l;
       }
       l = mid +1 ;
     }
    }
    



    return ans;
}

int main() {


    return 0;
}
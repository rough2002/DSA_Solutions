#include <iostream>
#include <vector>
using namespace std;


int binarySearch (vector<int> arr , int k) {
    int n = arr.size();
    int low = 0 , high = n-1;
    
    while (low <= high)   // mistake
    {
        int mid = (high + low) /2; 
        if(k == arr[mid]){
            return mid;
        }
        else if (k > mid){
          low = mid+1;   
        }
        else{
          high = mid-1;
        }
    }

    return -1;
    
}

int binarySearchRecurrsive(vector<int> arr , int k , int low , int high) {
    if(low >  high) {
        return -1;
    }

    int mid = (low +  high) /2 ;
    
    if(arr[mid] == k){
        return mid;
    }
    else if(arr[mid] > k){
      return binarySearchRecurrsive(arr , k , low , mid -1);
    }

    return binarySearchRecurrsive(arr , k , mid +1 , high);

    
}


int main () {
    vector<int> arr = {1,2,4,5,6};
    cout << binarySearch(arr , 5) << endl;
    cout << binarySearch(arr , 1) << endl;
    cout << binarySearch(arr , 6) << endl;
    cout << binarySearch(arr , 0) << endl;
    cout << "REcursive" << endl;
    cout << binarySearchRecurrsive(arr , 5 , 0, 4) << endl;
    cout << binarySearchRecurrsive(arr , 1 ,0, 4) << endl;
    cout << binarySearchRecurrsive(arr , 6 ,0, 4) << endl;
    cout << binarySearchRecurrsive(arr , 0 ,0, 4) << endl;

    return 0;
}
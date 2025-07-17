#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int countPainters(vector <int> arr , int boards){
    int boardsPainter = 0;
    int painters = 1;

    for(int i = 0 ; i < arr.size() ;i++) {
        if(arr[i] + boardsPainter < boards){
            boardsPainter += arr[i];
        }
        else {
            painters++;
            boardsPainter = arr[i];
        }
    }

    return painters;
}

int findLargestMinDistance(vector<int> arr , int k){
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while (low <= high)
    {
        int mid = (low+high)/2;
        if(countPainters(arr,mid) > k){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return low;
    
}

int main(){

    return 0 ;
}
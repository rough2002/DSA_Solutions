#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int countStudents(vector <int> arr , int pages){
    int studentPages = 0;
    int students = 1;

    for(int i = 0 ; i < arr.size() ;i++) {
        if(arr[i] + studentPages < pages){
            studentPages += arr[i];
        }
        else {
            students++;
            studentPages = arr[i];
        }
    }

    return students;
}

int findPages(vector <int> arr ,int m) {
    int n = arr.size();
    if( m <n) return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
     
    while(low<=high) {
        int mid = (low+high)/2;
        if(countStudents(arr,mid) > m) {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }

    return low;
}

int main() {

    return 0;
}
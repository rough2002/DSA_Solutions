#include <iostream>
#include <vector>

using namespace std;

int findLowerbound (vector <int> arr , int k){
   int n  = arr.size() ;
   int ans =  n+1 , low = 0 , high = n-1;

   while(low <= high) {
    int mid  = (low + high) /2;
    if(arr[mid] >= k){
        ans = mid;
         high = mid - 1;
    }
    low = mid+1;
   }

   return ans;
}




void runTest(const vector<int>& arr, int k, int expected) {
    int result = findLowerbound(arr, k);
    cout << "findLowerbound(arr, " << k << ") = " << result
         << " | Expected: " << expected
         << " | " << (result == expected ? "✅ Passed" : "❌ Failed") << "\n";
}

int main() {
    // ✅ Basic tests
    runTest({1,2,2,3}, 2, 1);   // First occurrence of 3
    runTest({3,5,8,15,19}, 9, 3);   // First >= 4 is 5 at index 3
    runTest({}, 9, 1);
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int brute(vector<int> arr) {
  int n = arr.size();
  int maxProfit  = 0 ;

  for( int i = 0; i < n ; i++) {
    for(int j = i +1; j < n; j++) {
        if(arr[j] > arr[i]) {
            maxProfit = max(arr[j] - arr[i], maxProfit);
        }
    }
  }

  return maxProfit;
}

int optimal(vector<int> arr) {
    int maxProfit = 0;
    int minPrice = INT_MAX;

    for( auto el  : arr) {
        minPrice = min(minPrice , el);
        maxProfit = max(maxProfit , el - minPrice);
    }

    return maxProfit;
}


int main() {
   vector<int> arr = {7,1,5,3,6,4};
   cout << brute(arr) <<endl;
   cout << optimal(arr) <<endl;


   return 0;
}
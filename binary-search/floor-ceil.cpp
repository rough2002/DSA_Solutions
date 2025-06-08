#include <iostream>
#include <vector>

using namespace std;

int floor (vector<int> arr , int k ){
    int n = arr.size();
    int low = 0 , high = n-1 , ans = -1;

    while(low <= high) {

        int mid = (low + high)/2;
        	if (arr[mid] <= k) {
			ans = arr[mid];
			low = mid + 1;
		}
		else {
			high = mid - 1; // look on the right
		}


    }
    return ans;
}

int ceil (vector<int> arr , int k ){
    int n = arr.size();
    int low = 0 , high = n-1 , ans = -1;
    
    while(low <= high) {

        int mid = (low + high)/2;
        if (arr[mid] >= k) {
			ans = arr[mid];
			//look for smaller index on the left
			high = mid - 1;
		}
		else {
			low = mid + 1; // look on the right
		}

    }
    return ans;
}

pair<int, int> getFloorAndCeil(vector<int> arr, int x) {
	int f = floor(arr, x);
	int c = ceil(arr,x);
	return make_pair(f, c);
}

int main () {
	vector<int>  arr = {3, 4, 4, 7, 8, 10};
	int n = 6, x = 5;
	pair<int, int> ans = getFloorAndCeil(arr, x);
	cout << "The floor and ceil are: " << ans.first
	     << " " << ans.second << endl;
	return 0;
}
#include <iostream>
#include <vector>

/// Pattern :  Binary search on answers



using namespace std;
int findSqrt(int n) {
    int l = 0 , h = n, ans= 0 ;
    while(l <= h){
        int mid = (l+h)/2;
        if(mid*mid <= n) {
            ans = mid;
            l = mid + 1;
        }
        else {
            h = mid-1;
        }
    }

    return ans;
}

int main() {


    cout << findSqrt(121);

    return 0;
}
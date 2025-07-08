#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


int findRoot(int n,int m) {
   int l = 1 , h = n;

   while(l <=h) {

    int mid  = (l+h)/2;

    if(pow(mid,n) == m){
        return mid;
    }
    if(pow(mid,n) < m){
      l = mid +1;
    }
    else {
      h=mid-1;
    }


   }
   return -1;


}


int main() {


    cout << findRoot(3,27);
    cout << findRoot(4,69);
    return 0;
}
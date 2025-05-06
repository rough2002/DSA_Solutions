#include <iostream>
#include <vector>
using namespace std;


// n^3
int brute(vector<int> arr , int sum ){
  int n = arr.size();
  int len = 0;


  for(int i  =0; i < n; i++) {
    for(int j =i; j< n; j++) {
      int s = 0;
      for(int k = i; k <= j ; k++){
          s+= arr[k];
      }
      if(s ==  sum) {
       len =  max(j-i+1 , len);
      }
    }
  }

  return len;

}


//  n^2
int brute2(vector<int> arr , int sum) {
    int n = arr.size();
    int len = 0;
  
  
    for(int i  =0; i < n; i++) {
        int s = 0;
      for(int j =i; j< n; j++) {
       s+= arr[j];
       if(s ==  sum) {
         len =  max(j-i+1 , len);
        }
      }
    }
  
    return len;
}

int optimal(vector<int> arr , int k) {
   int n = arr.size();
   int i =0 ,j = 0 ,len =0 ;
   int sum =arr[0];

   while ( j < n){


    while(i <= j && sum > k ){
        sum -= arr[i];
        i++;
    }

    if(sum == k) {
        
        cout<< sum << "len" << (j-i+1) << j << i ;
        len = max(len, j-i +1);
    }

    j++;
    if(j < n ){
        sum += arr[j];
    }
   }

   return len;
}



int main() {
    vector<int> arr ={1, 2, 3, 4, 5};
    int k = 5;


    cout<< brute(arr ,k) << endl;
    cout<< brute2(arr ,k) << endl;
    cout<< optimal(arr ,k) << endl;
    return 0;
}
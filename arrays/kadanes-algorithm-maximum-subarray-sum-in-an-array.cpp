#include <iostream>
#include <vector>
using namespace std;

int better(vector<int> arr){
    int n  = arr.size();
    int s  = 0 , e = 0;
    int sum = arr[0];

    for(int i = 0; i < n ; i++) {
        int tempSum = 0;
       for(int j = i ;  j < n ; j++ ){
        tempSum += arr[j];
        if(tempSum > sum){
            s = i;
            e = j;
            sum = tempSum;
        }
       }
    }

    for(int i = s; i<= e ;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return sum;
}


// Kadane Algo
int optimal(vector<int> arr) {
    int n = arr.size();
    int start = 0;
    long long sum = 0 , maxi = LONG_MIN;
    int startInd = -1 , endingInd = -1;
    
    for (int i = 0; i < n; i++){
        if(sum == 0) start = i;
        sum += arr[i];


        if(sum > maxi) {
            maxi = sum;
            startInd = start;
            endingInd = i;
        }

        if(sum < 0){
            sum = 0;
        }

    }

    if(maxi < 0) {
        return 0;
    }
    cout <<endl << startInd << " " << endingInd << endl;
    return maxi;


}



int main () {

    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout << better(arr)<< "  " << optimal(arr);
    return 0;
}
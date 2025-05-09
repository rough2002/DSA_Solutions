#include <iostream>
#include <map>
#include <vector>
using namespace std;



// using hashing
int better(vector<int> arr){
  int n = arr.size();
  int half = n/2;
  map<int,int> freq;

  for(auto el  : arr) {
    freq[el]++;
  }

  for(auto el : freq){
    if(el.second > half) return el.first;
  }

  return -1;

}

// using moore's voting algo

int optimal(vector<int> arr){
    int element = -1;
    int count =0;
    for (auto el  :  arr) {
        if(count == 0) {
            element = el;
            count ++; 
        }
        else if(element == el) {
            count ++;
        }
        else {
            count--;
        }
    }
    return element;
}

int main () {
    vector<int> arr =  {4,4,2,4,3,4,4,3,2,4};
    cout << better(arr) <<endl;
    cout << optimal(arr) <<endl;

    return 0;
}
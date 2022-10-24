#include<iostream>
using namespace std;

class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        int choc=INT_MAX;
        for(int i=n-1; i>=0; i--){
            if(arr[i]<choc){
                choc=arr[i];
            } 
        }
       return choc;
    }
};

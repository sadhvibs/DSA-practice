#include<iostream>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code her
        for(int i=0; i<n-1; i+=2){
            swap(arr[i], arr[i+1]);
        }
        if(n%2!=0){
            n=arr[n];
        }
    }
};

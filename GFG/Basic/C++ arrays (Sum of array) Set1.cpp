c#include<iostream>
using namespace std;

class Solution{
    public:
    int getSum(int a[], int n) {
        // Your code goes here
        
        int res=0;
        for(int i=0; i<n; i++){
            res=res+a[i];
        }
        return res;
    }   
};

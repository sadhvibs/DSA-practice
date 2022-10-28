#include<iostream>
using namespace std;

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
    int lsum=0, rsum=0;
        if(n==0 || n==1){
            return n;
        }
        for(int i=0; i<n; i++){
            rsum+=a[i];
        }
        
        for(int i=0; i<n; i++){
            rsum-=a[i];
            if(lsum==rsum){
                return i+1;
                break;
            }
            lsum+=a[i];
        }
        return -1;
    }

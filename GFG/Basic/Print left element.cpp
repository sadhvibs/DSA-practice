#include<iostream>
using namespace std;

class Solution{
 public:
    int leftElement(int a[], int n) {
        // Your code goes here  
        sort(a, a+n);
        
        return a[(n-1)/2];
    }
};

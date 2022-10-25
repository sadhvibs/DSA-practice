#include<iostream>
using namespace std;

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        // code here
       d=n-d;
       reverse(arr, arr+n);
       reverse(arr, arr+d);
       reverse(arr+d, arr+n);
    }
};

#include<iostream>
using namespace std;

class Solution{
public:

	int maxProduct(int arr[], int n) {
	    // code here
	    
	    int res;
	    sort(arr, arr+n);
	    res=arr[n-1]*arr[n-2];
        return res;	    
	}
	
};

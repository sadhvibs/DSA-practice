#include<iostream>
using namespace std;

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    
	    sort(arr, arr+n);
	    int l=0, r=n-1;
	    while(l<r){
	        if(arr[r]+arr[l]<x){
	            l++;
	        }
	        else if(arr[r]+arr[l]>x){
	            r--;
	        }
	        else if(arr[r]+arr[l]==x){
	            return true;
          }     
	    }
	   return false;
	}
};

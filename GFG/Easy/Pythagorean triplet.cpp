#include<iostream>
using namepsace std;

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
   sort(arr, arr+n);
	    
	    for(int i=n-1; i>1; i--){
	        int l=0;
	        int h=i-1;
	        
	        while(l<h){
	            if((arr[l]*arr[l])+(arr[h]*arr[h])<(arr[i]*arr[i]))
	                l++;
	            else if((arr[l]*arr[l])+(arr[h]*arr[h])>(arr[i]*arr[i]))
	                h--;
	            else
	                return true;
	        }
	    }
	    return false;
	}
};

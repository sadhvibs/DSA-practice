#include<iostream>
using namespace std;

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	   //
	   int largest = -1;
	   int second_largest = -1;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]>largest){
	            second_largest = largest;
	            largest = arr[i];
	        }
	        else{
	            if(arr[i]>second_largest && arr[i]!=largest)
	                second_largest = arr[i];
	        }
	    }
	    
	    	return second_largest;
	}

};

#include<iostream>
using namespace std;

class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    
	     for(int i=0; i<n-1; i++){
	        if(arr[i]>arr[i+1]){
	            arr[i]=arr[i+1];
	        }
	        else
	            arr[i]=-1;
	    }
	    arr[n-1]=-1;
	}

};

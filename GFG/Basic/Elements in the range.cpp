#include<iostream>
using namespace std;

class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		if(n<=B-A)
		    return false;
		for(int i=0; i<n; i++){
		    if(abs(arr[i])>=A && abs(arr[i])<=B){
		        int index=abs(arr[i])-A;
		        if(arr[index]>0)
		            arr[index]*=-1;
		    }
		}
		
		for(int i=0; i<=B-A; i++){
		    if(arr[i]>0){
		        return false;
		    }
		}
		return true;
	}
};

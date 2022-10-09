#include<iostream>
using namespace std;

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0; i<n; i++){
    	    int rem=0, rev=0, num;
    	    num=a[i];
    	    while(num>0){
    	        rem=num%10;
    	        rev=rev*10+rem;
    	        num=num/10;
    	    }
    	    if(a[i]!=rev)
    	        return false;
    	}
    	return true;
    }
};

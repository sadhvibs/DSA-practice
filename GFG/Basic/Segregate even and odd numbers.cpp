#include<iostream>
using namespace std;

class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    int even[n], a=0;
	    int odd[n], b=0; 
	    for(int i=0; i<n; i++){
	        if(arr[i]%2==0){
	            even[a]=arr[i];
	            a++;
	        }
	        else if(arr[i]%2!=0){
	           odd[b]=arr[i];
	           b++;
	        }
	    }
	    sort(even, even+a);
	    sort(odd, odd+b);
	    
	    for(int i=0; i<a; i++){
	        arr[i]=even[i];
	    }
	    for(int i=a; i<a+b; i++){
	       arr[i]=odd[i-a];
	    }
	}
};

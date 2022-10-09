#include<iostream>
using namespace std;

class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    vector<int> res;
	    
	    int small=0;
	    int large=0;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]>=x){
	            large++;
	        }
	    }
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]<=x){
	            small++;
	        }
	    }
	    
	    res.push_back(small);
	    res.push_back(large);
	    
	    return res;
	}
};

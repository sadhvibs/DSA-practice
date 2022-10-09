#include<iostream>
using namespace std;

class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	    
	    string res;
	    string a=to_string(n);
	    string b=to_string(n*2);
	    string c=to_string(n*3);
	    res=a+b+c;
	    
	    sort(res.begin(), res.end());
	    
	    for(int i=0; i<res.size(); i++){
	        if(res[i]=='0')
	            return false;
	       
	        if(res[i]==res[i+1])
	            return false;
	    }
	    return true;
	}
};

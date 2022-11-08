#include<iostream>
using namespace std;

class Solution
{
    public:
        bool check (string s)
        {
        	//code here.
        	if(s.size()==1)
        	    return true;
        	for(int i=1; i<s.length(); i++){
        	    if(s[0]!=s[i])
        	        return false;
        	}
         return true;
        }
};

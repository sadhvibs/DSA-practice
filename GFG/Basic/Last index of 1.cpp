#include<iostream>
using namepsace std;


class Solution{
    public:
    int lastIndex(string s) 
    {
        int n=s.length();
        for(int i=n-1; i>=0; i--){
            if(s[i]=='1')
                return i;
        }
    
    return -1;
    }
};

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    string longest(string names[], int n)
    {
        
        int max=0;
        string str="";
        for(int i=0; i<n; i++){
            if(max<names[i].length()){
                max=names[i].length();
                str=names[i];
            }
        
        }
        return str;
    }
};

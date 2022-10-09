#include<iostream>
using namespace std;

class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        // Complete the function
       
        
        for(int i=0; i<n; i++)
            if(a[i]!=a[n-1-i]){
                return false;
            }
        return true;
    }
};

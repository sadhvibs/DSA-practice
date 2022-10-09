#include<iostream>
using namespace std;

class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here 
        
        sort(a, a+n);
        vector<int> res;
        
        for(int i=0; i<n-2; i++){
            
            res.push_back(a[i]);
        }
        return res;
    }
};

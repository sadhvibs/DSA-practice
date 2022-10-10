#include<iostream>
using namespace std;

vector<vector<int>> transpose(int a[][M], int n)
{
    // Code here
    
    vector<vector<int>> res;
    
    for(int i=0; i<n; i++){
        vector<int> ans;
        for(int j=0; j<n; j++){
            ans.push_back(a[j][i]);
        }
        res.push_back(ans);
    }
    return res;
}

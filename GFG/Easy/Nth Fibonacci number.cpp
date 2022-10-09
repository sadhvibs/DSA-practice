#include<iostream>
using namespace std;

class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        const int m=1e9+7;
        vector<int>f(n+1, 0);
       f[0]=0;
       f[1]=1;
        
        for(int i=2; i<=n; i++)
        {
            f[i]=(f[i-1] + f[i-2])%m;
        }
        return f[n]%m;
    }
};

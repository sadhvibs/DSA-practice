#include<iostream>
using namespace std;

class Solution{
public:
    int Maximize(int a[],int n)
    {
        // Complete the function
       long long int sum=0;
        long long int mod=1e9+7;
        sort(a, a+n);
        for(long long int i=0; i<n; i++){
            sum=sum+a[i]*i;
            sum = sum % mod;
        }
        return sum;
    }
};

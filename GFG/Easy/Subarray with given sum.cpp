#include<iostream>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
      int l=0, r=0;
        int sum=0;
        
        while((l<n) && (r<=n)){
            if(s==0)
               return {-1};
            if(sum<s){
                sum+=arr[r];
                r++;
            }
            
            else if(s<sum){
                sum-=arr[l];
                l++;
            }
            
            else if(sum==s){
                return {l+1, r};
                //break;
            }
        }
        return {-1};
    }
   
};

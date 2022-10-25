#include<iostream>
using namespace std;

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
       int u=-1, v=-1;
        int res=INT_MAX;
        
        for(int i=0; i<n; i++){
            if(a[i]==x){
                u=i;
            }
            if(a[i]==y){
                v=i;
            }
            if(u!=-1 && v!=-1){
                res=min(res, abs(u-v));
            }
        }
        
        if(res==INT_MAX || res==0)
            return -1;
        else
            return res;
    }
};

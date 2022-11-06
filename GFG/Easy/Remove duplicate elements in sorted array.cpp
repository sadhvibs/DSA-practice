#include<iostream>
using namespace std;

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int j=0;
        
        for(int i=0; i<n; i++){
            if(a[i]!=a[i+1]){
                a[j++]=a[i];
            }
        }
        return j;
    }
};

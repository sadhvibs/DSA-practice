#include<iostream>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        
        unordered_map<int, int> m;
        int count=0;
        for(int i=0; i<n; i++){
            int res=k-arr[i];
            if(m[res]){
                count=count+m[res];
            }
            m[arr[i]]++;
        }
        return count;
    }
};

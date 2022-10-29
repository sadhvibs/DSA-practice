#include<iostream>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> res;
        int index;
        for(int i=0; i<n; i++){
            index=arr[i]%n;
            arr[index]=arr[index]+n;
        }
        
        for(int i=0; i<n; i++){
            if((arr[i]/n)>=2)
                res.push_back(i);
        }
        if(res.empty()){
            res.push_back(-1);
        }
        return res;
    }
};

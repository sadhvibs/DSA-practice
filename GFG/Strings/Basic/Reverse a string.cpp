#include<iostream>
using namespace std;

class Solution {
  public:
    string revStr(string S) {
        // code here
        
        int low=0, high=S.size()-1;
        while(low<=high){
            int temp=S[low];
            S[low]=S[high];
            S[high]=temp;
            low++;
            high--;
        }
        return S;
    }
};

#include<iostream>
using namespace std;

class Solution {
  public:
    string conRevstr(string S1, string S2) {
        // code here
        string S3="";
        S3=S1+S2;
        int low=0, high=S3.size()-1;
        while(low<=high){
            swap(S3[low], S3[high]);
            low++;
            high--;
        }
        return S3;
    }
};

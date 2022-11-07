#include<iostream>
using namespace std;

class Solution {
  public:
    string toLower(string S) {
        // code here
        
        for(int i=0; i<S.length(); i++){
            S[i]=tolower(S[i]);
        }
        return S;
    }
};

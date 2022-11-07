#include<iostream>
using namespace std;

class Solution {
  public:
    string delAlternate(string S) {
        // code here
        for(int i=0; i<S.length(); i++){
            if(i%2!=0 || i!=0){
                S.erase(i,1);
            }
        }
        return S;
    }
};

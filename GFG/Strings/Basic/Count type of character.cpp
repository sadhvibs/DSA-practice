#include<iostream>
using namespace std;

class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            int count1=0, count2=0, count3=0, count4=0;
            for(int i=0; i<s.size(); i++){
                if(s[i]>='A' && s[i]<='Z'){
                    count1++;
                }
                else if(s[i]>='a' && s[i]<='z'){
                    count2++;
                }
                else if(s[i]>='0' && s[i]<='9'){
                    count3++;
                }
                else{
                    count4++;
                }
            }
            return{count1, count2, count3, count4};
        }
};

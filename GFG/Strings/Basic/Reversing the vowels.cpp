#include<iostream>
using namespace std;

class Solution
{
    public:
        bool isVowel(int vow){
            return(vow=='a' || vow=='e' || vow=='i' || vow=='o' || vow=='u');
        }
        
        string modify (string s)
        {
            //code here.
            int low=0, high=s.size()-1;
            while(low<high){
                while(!isVowel(s[low]) && low<high){
                    low++;
                }
                while(!isVowel(s[high]) && low<high){
                     high--;
                }
                swap(s[low], s[high]);
                low++;
                high--;
            }
            return s;
        }
};

#include<iostream>
using namespace std;

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
       int count=0, min=10000, flag=0;
        string s;
        for(int i=0; i<N; i++){
            int len=arr[i].length();
            if(len<min)
                min=len;
                s=arr[i];
        }
        
        for(int i=0; i<min; i++){
            for(int j=0; j<N; j++){
                if(arr[j][i]!=s[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
            count++;
        }
        if(count==0)
            return "-1";
        else
            return s.substr(0, count);
    }
};

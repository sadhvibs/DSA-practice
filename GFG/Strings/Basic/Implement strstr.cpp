#include<iostream>
using namespace std;

int strstr(string s, string x)
{
     //Your code here
    int lenS=s.length();
     int lenX=x.length();
     int flag;
     for(int i=0; i<lenS; i++){
         if(x[0]==s[i]){
             flag=0;
             for(int j=0; j<lenX; j++){
                 if(x[j]!=s[i+j]){
                     flag=1;
                     break;
                 }
             }
             if(flag==0){
                 return i;
            }
         }
     }
     return -1;
}

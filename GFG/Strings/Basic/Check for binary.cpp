#include<iostream>
using namespace std;

bool isBinary(string str)
{
   // Your code here
   
   for(int i=0; i<str.length(); i++){
       if(str[i]!='0' && str[i]!='1'){
            return 0;
       }   
   }
   return 1;
}

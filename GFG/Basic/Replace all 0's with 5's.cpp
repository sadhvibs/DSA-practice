#include<iostream>
using namespace std;

int convertFive(int n) {
    // Your code here
  string str;
  str=to_string(n);
  for(int i=0; i<str.length(); i++){
      if(str[i]=='0')
        str[i]='5';
  }
  return stoi(str);
}

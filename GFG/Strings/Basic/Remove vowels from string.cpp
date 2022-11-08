#include<iostream>
using namespace std;

class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    int i=0;
	    while(i<S.size()){
	        if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u'){
	            S.erase(i,1);
	        }
	        else{
	            i++;
	        }
	    }
	    return S;
	}
};

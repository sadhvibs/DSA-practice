#include<iostream>
using namespace std;

void Rearrange(int arr[], int n)
{
    // Your code goes here
    vector<int> neg, pos;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
   
    
    for(int i=0; i<neg.size(); i++){
        arr[i]=neg[i];
    }
    for(int i=0; i<pos.size(); i++){
        arr[i+neg.size()]=pos[i];
    }
}

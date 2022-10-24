#include<iostream>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> v;
    int smallest=INT_MAX;
    int second_small=INT_MAX;
    
    for(int i=0; i<n; i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]>smallest && a[i]<second_small){
            second_small=a[i];
        }
    }  
    if(second_small==INT_MAX || n<2){
         return{-1, -1};
    }    
    else{
        v.push_back(smallest);
        v.push_back(second_small);
        return v;
    }
}

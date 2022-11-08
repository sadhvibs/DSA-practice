#include<iostream>
using namespace std;

int findElement(int arr[], int n) {

    int l[n];
    int r[n];

    int maxi=arr[0];
    for(int i=0; i<n; i++){
        maxi=max(maxi, arr[i]);
        l[i]=maxi;
    }
    int mini=arr[n-1];
    for(int i=n-1; i>=0; i--){
        mini=min(mini, arr[i]);
        r[i]=mini;
    }
    for(int i=1; i<n-1; i++){
        if(arr[i]>=l[i-1] && arr[i]<=r[i+1]){
            return arr[i];
        }
    } 
    return -1;
}

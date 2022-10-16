#include<iostream>
using namepsace std;

void rotate(int arr[], int n)
{
    
    int x=arr[n-1];
    for(int i=0; i<=n-1; i++){
        swap(arr[i], arr[n-1]);
    }
    
}

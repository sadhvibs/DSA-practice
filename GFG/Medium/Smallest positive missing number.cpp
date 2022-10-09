#include<iostream>
using namespace std;

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
       
       for(int i=0; i<n; ++i)
       {
           
           while(arr[i]<=n && arr[i]>0 && arr[i]!=arr[arr[i]-1])
           {
                swap(arr[i], arr[arr[i]-1]);   
            }
       }
       
       for(int i=0; i<n; ++i)
       {
           if(arr[i] != i+1)
                return i+1;
            
       }
       return n+1;
    } 
};

#include<iostream>
using namespace std;

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
            int low=0, high=n-1;
       
       while(low<high){
           int mid=(low+high)/2;
           if(arr[mid]<arr[mid+1]){
               low=mid+1;
           }
           else{
               high=mid;
           }
       }
       return low; 
    }
};

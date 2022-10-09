#include<iostream>
using namespace std;

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
       int low=0, high=n-1, mid;
       while(low<=high)
       {
           if(low>high)
                return -1;
            else
            {
                mid=(low+high)/2;
                if(k==arr[mid])
                    return mid;
                else if(k>arr[mid])
                   low=mid+1;
                else
                    high=mid-1;
            }
       }
       return -1;
    }
};

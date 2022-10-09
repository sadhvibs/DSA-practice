#inclue<iostream>
using namepsace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxsum=INT_MIN;
        int currsum=0;
        
        for(int i=0; i<n; i++)
        {
            currsum= max(currsum+arr[i], arr[i]);
            
            if(currsum>maxsum)
            {
                maxsum=currsum;
            }
            else if(currsum<0)
            {
                currsum=0;
            }
          
        }
        return maxsum;
        
    }
};

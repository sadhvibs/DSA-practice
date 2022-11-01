#include<iostream>
using namespace std;

class Solution{
    public:
    int getTarget(int val1, int val2, int target){
        if(target-val1>=val2-target)
            return val2;
        else
            return val1;
    }
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        if(target<=arr[0])
            return arr[0];
        if(target>=arr[n-1])
            return arr[n-1];
            
        int s=0, e=n-1, mid;
        while(s<e){
            mid=(s+e)/2;
            
                if(arr[mid]==target)
                    return arr[mid];
                
                if(target<arr[mid]){
                    if(mid>0 && target>arr[mid-1])
                        return getTarget(arr[mid-1], arr[mid], target);
                 
                e=mid;
                }
                else{
                    if(mid<n-1 && target<arr[mid+1])
                        return getTarget(arr[mid], arr[mid+1], target);
                 s=mid+1;
                }
            }
        return arr[mid];
    } 
};

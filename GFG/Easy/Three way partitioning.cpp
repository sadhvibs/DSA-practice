#include<iostream>
using namespace std;

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int n=array.size();
        int low=0, mid=0, high=n-1;
        
        while(mid<=high){
            if(array[mid]<a){
                swap(array[mid], array[low]);
                low++;
                mid++;
            }
            else if(array[mid]>b){
                swap(array[mid], array[high]);
                high--;
            }
            else
                mid++;
        }
    }
};

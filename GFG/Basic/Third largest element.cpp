#include<iostream>
using namespace std;

class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         int largest=INT_MIN;
         int second_largest=INT_MIN;
         int third_largest=INT_MIN;
         
         for(int i=0; i<n; i++){
            if(a[i]>third_largest){
                third_largest=a[i];
            }
            
            if(a[i]>second_largest){
                third_largest=second_largest;
                second_largest=a[i];
            }
            
            if(a[i]>largest){
               
                second_largest=largest;
                largest=a[i];
            }
         }
         return third_largest;
    }
   };

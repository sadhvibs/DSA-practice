#include<iostream>
using namespace std;

class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long int fin=0;
        if(date%2==0){
           for(int i=0; i<n; i++){
               if(car[i]%2!=0){
                   fin=fin+fine[i];
               }
           }
        }
        else if(date%2 != 0){
            for(int i=0; i<n; i++){
               if(car[i]%2==0){
                   fin=fin+fine[i];
               }
           }
        }
        return fin;
    }
};

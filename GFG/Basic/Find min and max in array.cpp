#include<iostream>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    
    
    long long min=INT_MAX;
    long long max=INT_MIN;
    
    for(int i=0; i<n; i++){
        if(min>a[i])
            min=a[i];
            
        if(max<a[i])
            max=a[i];
    }
    return {min, max};
}

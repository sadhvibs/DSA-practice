#include<iostreeam>
using namepsace std;

vector<int> find(int arr[], int n, int x)
{
  vector<int> vec;
    
    int low=0, high=n-1;
    
    while(low<=high){
        if(x!=arr[low])
            low++;
        if(x!=arr[high])
            high--;
        if(x==arr[low] && x==arr[high])
        {
            vec.push_back(low);
            vec.push_back(high);
            break;
        }
    }
    
    while(low>high){
        vec.push_back(-1);
        vec.push_back(-1);
        return vec;
    }
}

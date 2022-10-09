#inclue<iostream>
using namespace std;

class Solution
{
     public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
   {
      const int m=1e9+7;
      vector<int> rec(n+1,0);
      rec[0]=rec[1]=1;
      for(int i=2; i<=n; i++)
      {
          rec[i]=(rec[i-1]+rec[i-2])%m;
      }
      return rec[n]%m;
   }
};

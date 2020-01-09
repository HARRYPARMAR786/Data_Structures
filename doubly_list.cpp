#include<bits/stdc++.h>
using namespace std;

int checkPrimeNumber(int n)
{
  bool flag = false;
  for(int i = 2; i <= n/2; ++i)
  {
      if(n%i == 0)
      {
          flag = true;
          break;
      }
  }
int gcd(long a, long b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);}
int main()
{
  int t,count=0;
  cin>>t;
  for(int i=0;i<t;i++){
    int L,R,X,fun=0;cin>>L>>R;
    for(X=L;X<=R;X++){
      for(int j=0;j<x;j++){
        if(gcd(j,x)==j)
          fun=fun+1;
        else
          fun=fun+0;  
      }
      if(checkPrimeNumber(fun) == 0)
          count++;
  else
            count=count;
        }

  }
  return 0;
}
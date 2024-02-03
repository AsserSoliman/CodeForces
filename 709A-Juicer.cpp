#include <iostream>
using namespace std;
 
int main() 
{
  long long int n,b,d,sum=0,count=0;
  cin>>n>>b>>d;
 
 
 
  for(int i =0;i<n;i++)
  {  
    int x;
    cin>>x;
 
    if(x<=b)
      sum+=x;
 
    if(sum>d)
    {
      sum = 0;
      count++;
    }
 
  
  }
 
  cout<<count;
 
}
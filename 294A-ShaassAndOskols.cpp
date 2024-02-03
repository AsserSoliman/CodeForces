#include <iostream>
using namespace std;
 
int main() 
{
  int n;
  cin>>n;
 
  int x[n];
 
  for(int i =0;i<n;i++)
    cin>>x[i];
 
  int t;
  cin>>t;
 
  while(t--)
  {
     int a,b;
     cin>>a>>b;
 
    if(a==1)
    {  
      x[a] += x[a-1]-b;
      x[a-1] = 0;
    }
    else if(a==n)
    {
      x[a-2] += (b-1);
      x[a-1] = 0; 
    }
    else
    {
      x[a-2] += b-1;
      x[a] += x[a-1]-b;
      x[a-1] = 0;
     
      
    }
  }
 
  for(int i =0;i<n;i++)
    cout<<x[i]<<endl;
  
}
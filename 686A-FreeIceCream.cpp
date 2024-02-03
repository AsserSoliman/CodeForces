#include <iostream>
#include <string>
using namespace std;
 
 
int main() 
{
  long long int a,b,count=0;
  cin>>a>>b;
 
  for(int i =0;i<a;i++)
    {
      char x;
      long long int y;
 
      cin>>x>>y;
      
     
 
      if(x == '+')
      {
        b += y;
      }
      else
      {
        if(b >= y)
          b -= y;
        else
          count++;
      }
      
      
    }
  cout<<b<<" "<<count;
 
}
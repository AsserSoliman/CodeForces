#include <iostream>
using namespace std;
int main() 
{
  int n;
  cin>>n;
 
  int level[n];
 
  int a;
  cin>>a;
 
  for(int i=0;i<a;i++)
    {
      int x;
      cin>>x;
 
      level[x-1] = 1;
    }
 
  
  int b;
  cin>>b;
 
 
  for(int i=0;i<b;i++)
   {
      int x;
      cin>>x;
 
      level[x-1] = 1;
    }
 
  for(int i=0;i<n;i++)
    {
      if(level[i] != 1)
      {cout<<"Oh, my keyboard!";
        return 0;
      }
    }
 
  
  cout<<"I become the guy.";
        return 0;
 
  
  
}
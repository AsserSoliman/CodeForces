#include <iostream>
using namespace std;
 
 
int main()
{
  int n,police =0,crime=0;
  cin>>n;
 
  for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
 
      if(a==-1)
      {
        if (police>0)
          police --;
        else
          crime ++;
      }
      else
      {
        police += a;
      }
    }
 
  cout<<crime;
 
 
  
}
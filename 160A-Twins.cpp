#include <iostream>
using namespace std;
 
int main() 
{
  int n,sum = 0;
  cin >> n;
 
  int a[n];
 
  for (int i =0;i<n;i++)
    {
      int x;
      cin>>x;
      a[i] = x;
      sum += x;
    }
  int flag = 0,coin =0,csum=0;
  
 
  for(int i =0 ;i<n;i++)
    for(int j = i+1;j<n;j++)
      {
        if(a[i]<a[j])
        {
          int temp =a[i];
          a[i] =a[j];
          a[j] = temp;
        }
      }
 
  int i = 0;
  while(!flag)
    {
      if(csum > (sum - csum))
      {
        flag = 1;
      }
      else
      {  
        coin ++;
        csum += a[i++];
        
      }
    }
 
  cout<<coin;
 
}
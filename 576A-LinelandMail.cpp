#include <iostream>
using namespace std;
 
 
int main()
{
  int n;
  cin>>n;
 
  int x[n];
 
  for(int i = 0;i<n;i++)
    cin>>x[i];
  
  for(int i = 0;i<n;i++)
    {  long long int mini ,maxi;
      
      if(i == 0)
      {
        mini = x[i+1] - x[i];
        maxi = x[n-1] - x[i];
      }
      else if(i == n-1)
      {
        mini = x[i] - x[i-1];
        maxi = x[i] - x[0];
      }
      else
      {  
        mini = min((x[i] - x[i-1]),(x[i+1]-x[i]));
        maxi = max((x[i]-x[0]),(x[n-1]-x[i]));           
      }
      cout<<mini<<" "<<maxi<<endl;
    }
  
}
#include <iostream>
#include <string>
using namespace std;
 
int main()
{  
  string x,y;
  cin>>x>>y;
 
  int j = 0;
  for(int i = 0 ;i<y.length();i++)
    {
      if (y[i] == x[j])
        j++;
    }
    
  cout<<j+1;
 
 
  return 0;
}
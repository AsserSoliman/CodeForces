#include <iostream>
#include<string>
using namespace std;
 
bool check(string x,int b)
{      int count = 0;
  
      for(int j =0;j<=b;j++)
        {
          if(x.find(to_string(j)) <x.length())
            count++;
        }
 
  if(count == b+1)
    return true;
  else
    return false;
    
  
}
int main() {
  int a,b,count = 0;
  cin>>a>>b;
 
  for(int i = 0;i<a;i++)
    {  
      string y;
      cin>>y;
 
      count += check(y,b);
      
    }
 
  cout<<count;
 
  
 
  
  
  
}
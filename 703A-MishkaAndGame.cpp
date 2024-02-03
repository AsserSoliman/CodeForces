#include <iostream>
using namespace std;
 
int main() {
  int n,s1=0,s2=0;
  cin >> n;
 
  for(int i =0;i<n;i++)
    {
      int a,b;
      cin>>a>>b;
      if (a>b)
        s1 ++;
      else if(b>a)
        s2 ++;
    }
 
  
  if (s1>s2)
    cout<<"Mishka";
  else if (s1<s2)
    cout<<"Chris";
  else
    cout<<"Friendship is magic!^^";
}
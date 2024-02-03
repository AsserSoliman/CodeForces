#include <iostream>
#include <set>
using namespace std;
 
 
int main() 
{
  string x;
  getline(cin,x);
  
 
  set<char>s;
 
  for(int i =0;i<x.length();i++)
    {
          if(x[i] != '}' &&x[i] != '{' && x[i] != ',' && x[i] != ' ')
          {
            s.insert(x[i]);
            
            }
    }
 
  cout<<s.size();
}
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
 
int main() 
{
  int n;
  cin>>n;
 
  vector<int>math,prog,sport;
 
  int x[n];
 
  for(int i =0;i<n;i++)
    cin>>x[i];
 
  for(int i =0;i<n;i++)
    {
      if(x[i]== 1)
        prog.push_back(i+1);
      else if (x[i]== 2)
        math.push_back(i+1);
      else
          sport.push_back(i+1);
    }
 
  int m = min(prog.size(),min(math.size(),sport.size()));
  cout<< m<<endl;
 
  for (int i =0;i<m;i++)
    cout<<math[i]<<" "<<prog[i]<<" "<<sport[i]<<endl;
 
  
 
}
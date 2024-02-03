#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
#define ll long long
#define Fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
Fastio;
ll a[]={4,7,47,74,44,77,444,474,477,447,777,747,774,744};
ll n,flag=0,i;
cin>>n;
for(i=0;i<14;i++)
{
if(n%a[i]==0)
{
cout<<"YES"<<endl;
flag=1;
break;
}
}
if(flag==0)
cout<<"NO"<<endl;
}
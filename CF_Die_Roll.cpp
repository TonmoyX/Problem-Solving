#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll y,w;
  
  cin>>y>>w;
  string s[6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
  ll m = max(y,w);
  cout<<s[m-1]<<endl;
  
}
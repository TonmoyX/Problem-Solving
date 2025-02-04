#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void ans()
{
    ll n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s.substr(i,3)=="map" || s.substr(i,3)=="pie")ans++;
        else if(i<=n-5 && s.substr(i,5)=="mapie")ans--;
    }
}



int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ans();
    }
}

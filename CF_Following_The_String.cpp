#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void ans()
{
    ll n;
    cin>>n;
    string s="abcdefghijklmnopqrstuvwxyz";
    map<char, ll> m;
    for(ll i=0; i<s.size(); i++)
    {
       m[s[i]]=0;
    }
    vector<ll>v(n);
    for(ll i=0 ;i<n; i++)
    {
        cin>>v[i];
        for(auto x:m)
        {
            if(x.second==v[i])
            {
                cout<<x.first;
            
            m[x.first]++;
            break;
            }
        }
    }
    cout<<endl;
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
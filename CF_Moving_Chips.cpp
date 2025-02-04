#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll f,l;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        
    }
    for(ll i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            f= i;
            break;
        }
    }
    for(ll i=n-1; i>=0; i--)
    {
        if(v[i]==1)
        {
            l=i;
            break;
        }
    }
    ll count=0;
    for(ll i=f; i<l; i++)
    {
           if(v[i]==0) count++;
    }
    cout<<count<<endl;
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
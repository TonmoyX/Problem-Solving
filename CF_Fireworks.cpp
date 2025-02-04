#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve()
{
        ll a,b,m;
        cin>>a>>b>>m;
        cout<<(m/a + 1) + (m/b +1)<<endl;

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
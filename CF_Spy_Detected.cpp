#include<bits/stdc++.h>
using namespace std;
/*void solve()
{
    int n;
    cin>>n;
    vector<pair<int, int>> v ;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        v.push_back({x,i});

    }
    sort(v.begin(),v.end());
    if(v[0].first==v[1].first) cout<<v[n-1].second<<endl;
    else cout<<v[0].second<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}*/

void solve()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    int val=0;
    if(a[0]==a[1]) val=a[n-1];
    else 
    val = a[0];
    for(int i=0; i<n; i++)
    {
        if(b[i]==val)
        {
            cout<<i+1<<endl;
        }
        
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--);
    {
        solve();
    }
}
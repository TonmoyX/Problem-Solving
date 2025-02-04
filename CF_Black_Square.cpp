#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,c,d,sum=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            sum+=a;
        }
        else if(s[i]=='2')
        {
                sum+=b;

        }
        else if(s[i]=='3')
        {
            sum+=c;}
        else if(s[i]=='4')
        {
            sum+=d;
        }
    }
    cout<<sum<<endl;

}
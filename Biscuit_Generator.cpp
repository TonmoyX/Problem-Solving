#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, a,b,t;
    cin>>a>>b>>t;
    int count=0;
    for(i=a; i<=t+0.5; i+=a)
    {
        count+=b;
    }
    cout<<count<<endl;
}
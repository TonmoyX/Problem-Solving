#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b;
    if(a>b)
    {
        a = b;
        b = a;
    }
    if(b==a || b-a==1)
    cout<<0<<endl;
    else{
     n = b - a;
    cout<<n+1<<endl;
}}
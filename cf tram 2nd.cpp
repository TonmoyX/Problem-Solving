#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b,p=0,m=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        p = p-a+b;
        if(p>m)
            m = p;
    }
    cout<<m;
}

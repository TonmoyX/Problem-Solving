#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,y,z,xsum=0,ysum=0,zsum=0;

    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x>>y>>z;
        xsum+=x;
        ysum+=y;
        zsum+=z;
    }
    if(xsum==0 && ysum==0 && zsum==0)
        cout<<"YES";
    else
        cout<<"NO";
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b,sum=0,k=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        sum = (a+k)-b;

        if(sum<0)
            k=0;
else
            k=sum;
    }
    cout<<sum;
}

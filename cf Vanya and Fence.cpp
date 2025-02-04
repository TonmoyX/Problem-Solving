#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,h,a,sum=0,x=0,y=0;
    cin>>n>>h;

    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a>h)
            y+=2;
        else
        x++;
    }
    sum = x+y;
    cout<<sum;

}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,t,c=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        if(b-a>=2)
        {
            c++;
        }

    }
        cout<<c;

}

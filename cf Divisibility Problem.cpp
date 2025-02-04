#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,sum,t,i;
    long long int a,b,count=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;

    if(a%b!=0)
    {
         v = a%b;
         sum = b-v;
         cout<<sum<<endl;
    }
    else
        cout<<"0"<<endl;


}
}

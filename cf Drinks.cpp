#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,v,i;
    double sum=0;
    cin>>n;
    for(i=0;i<n; i++)
    {
        cin>>v;
        sum = sum + v;
    }

    cout<<fixed<<setprecision(12)<<sum/n;
}

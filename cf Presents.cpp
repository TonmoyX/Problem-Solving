#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,v,i;
     cin>>n;
     vector<int>gifts(100);
     for(i=1; i<=n; i++)
     {
         cin>>v;
         gifts[v] = i;
     }
     for(i=1;i<=n; i++)
     {
        cout<<gifts[i]<<" ";

     }
}

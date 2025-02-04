#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
   ll arr[n];

   for(int i=0; i<n; i++)
   {
    cin>>arr[i];
   }
   int count=0;
   for(int i=0; i<n; i++)
   {
        if(arr[i]<5)
        {
            if(5-arr[i]>=k)
            {
                count++;
            }
        }
   }
   if(count>=3)
   {
    cout<<count/3<<endl;
   }
   else
   cout<<0<<endl;

}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,i,count=0;
   cin>>t;
   for(i=0; i<t; i++){

   
   cin>>n;
   int arr[n];
   for(i=0; i<n; i++)
   {
    cin>>arr[i];
  }
   for(i=0; i<n; i++)
   {
    if(arr[i]!=arr[i+1])
    {
        count++;
        cout<<count<<endl;
        break;
    }
    else continue;
   } 
}}

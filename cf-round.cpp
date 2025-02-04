#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,ans;
    int n;
   cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
         
        }
        sort(arr,arr+n);
        for(i=0; i<n; i++)
        {
            if(arr[i]<0 || arr[i+1]<0)
            arr[i] = abs(arr[i]);
            arr[i+1] = abs(arr[i+1]);
           
        }
        for(i=0; i<n-1; i++)
        {
             ans = arr[i]+arr[i+1];
        }
       
        cout<<ans;
         
        
        
        
    }
    
}
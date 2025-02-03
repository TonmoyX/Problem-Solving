#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int l=0; l<n; l++)
    {
        for(int r=l; r<n; r++)
        {
            for(int k=l; k<=r; k++)
            {
                cout<<a[k];
            }
     cout<<endl;  }
         
    }
   
}
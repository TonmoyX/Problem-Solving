#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t, i, n, k, x;
    cin>>t;
   
    while(t--){
        cin>>n>>k;
         x = 1;
        vector<ll>v(n);

        for(i=k-1; i<n; i+=k){
            v[i] = x;
            x++;
        }
        for(i=0; i<n; i++){
            if((i+1)%k!=0){
                v[i] = x;
                x++;
            }
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
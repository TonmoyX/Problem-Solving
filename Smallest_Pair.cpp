#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        int m=2;
        int ans=inf;
        int final_array[10^6];
        for(int i=1; i<=n-1; i++){   
            for(int j=m; j<=n; j++){
                ans =min(ans, a[i]+a[j]+j-i);
            }
            m++;
       } 
            cout<<ans<<endl;
    }
}
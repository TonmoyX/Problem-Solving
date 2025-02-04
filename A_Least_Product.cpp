#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   int a[n];

   int odd_cnt = 0;
   int zero_cnt = 0;
   long long product = 1;
   for(int i = 0;i<n;i++) {
      cin>>a[i];
      product *= a[i]; 
      if(a[i]<0) odd_cnt++;
      else if(a[i]==0) zero_cnt++;
   }
   
   if(zero_cnt || odd_cnt%2) cout<<0<<endl;
   else{
      cout<<1<<endl;
      cout<<1<<" "<<0<<endl;
   }
}

 
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1e5+9;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];   
    }
   bool is_palindrom=true;
   for(int i=1; i<=n; i++){
    int j = n-i+1;
    if(a[i]!=a[j]){
        is_palindrom=false;
    }
   }
   if(is_palindrom){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}
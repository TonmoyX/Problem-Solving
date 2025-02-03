#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    while(n--){
    for(int i=1; i<=m; i++){
        cin>>a[i];
    }
    for(int i=m; i>=1; i--){
        cout<<a[i]<<" ";
    }
        cout<<endl;
    }
    
}
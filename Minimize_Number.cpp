#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int operation=0; 
    while(true){
    bool if_all_even=true;
    for(int i=1; i<=n; i++){
        if(a[i]%2==1){
            if_all_even = false;
        }
    }
    if(if_all_even){
        for(int i=1; i<=n; i++){
            a[i]/=2;

        }operation++;
    }
    else{
            break;
        }
 
}
   cout<<operation<<endl;
   return 0;
}
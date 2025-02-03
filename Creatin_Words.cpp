#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    char c;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;
        c = b[0];
        b[0] = a[0];
        a[0] = c;
        cout<<a<<" "<<b;
    }
   
}
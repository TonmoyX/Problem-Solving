#include<bits/stdc++.h>
using namespace std;
const int n = 1e6+9;
char s[n];
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        int len = strlen(s);
        if(len>10){
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        }
        else
        cout<<s<<endl;
    }
}
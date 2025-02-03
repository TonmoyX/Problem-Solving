#include<bits/stdc++.h>
using namespace std;
const int n = 1e6;
char s[n];
int main(){
    int t;
    cin>>t;
    bool is_good = false;
    while(t--){
    cin>>s;
    int len = strlen(s);
    bool is_good = false;
    for(int i=0; i<len; i++){
        if(i+2<len and s[i]=='1' && s[i+1] == '0' && s[i+2]=='1' || i+2<len and s[i]=='0' && s[i+1] == '1' && s[i+2]== '0'){
        is_good = true;
        }
        
    }
    if(is_good)
    cout<<"Good"<<endl;
    else
    cout<<"Bad"<<endl;
    
}
}
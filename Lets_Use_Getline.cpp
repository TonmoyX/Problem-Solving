#include<bits/stdc++.h>
using namespace std;
const int n = 1e6+9;
//char s[n]; constent er por ekhane declare kkora jabe.

int main(){
    char s[n];
    cin.getline(s,n);
    int len = strlen(s);
   for(int i=0;i<len; i++){
    if(s[i]=='\\'){
        break;
    }
    cout<<s[i];
   } 
   cout<<endl;
}
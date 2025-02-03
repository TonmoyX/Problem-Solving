#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,k;
    cin>>s;
    int i;
        for(i=s.length()-1; i>=0; i--){
          k+= s[i];   
        }

        if(k==s){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   
    }

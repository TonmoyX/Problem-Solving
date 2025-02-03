#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,n;
     string s;
     cin>>s;
     n=s.size();
     map<char,int>mp;
     for(i=0; i<n; i++){
     
          mp[s[i]]++;
     }

     for(auto x:mp){
        cout<<x.first<< " : "<<x.second<<endl;
     }
}
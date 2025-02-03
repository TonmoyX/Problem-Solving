#include<bits/stdc++.h>
using namespace std;
//const int n = 1e6+9;
//char a[n];
int main(){
    string a;
   cin>>a;
   int sum = 0, i;
   //int len = strlen(a);
   for(i=0; i<a.size(); i++){
    sum+=a[i] - '0';
   }
   cout<<sum<<endl;
   
}
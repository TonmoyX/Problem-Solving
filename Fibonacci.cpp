#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,f=0,s=1,count=0,fibo;
    cin>>n;
    while(count<n){
        if(count<=1){
            fibo=count;
        }
        else{
            fibo = f+s;
            f = s;
            s = fibo;
        }
      
        count++;
    }  cout<<fibo<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c;
   cin>>a>>b>>c; 
   int i;
   for(i=a; i<=b; i++)
   {
    if(i%c==0){
    cout<<i<<endl;
    return 0;}
    
   }
   cout<<-1<<endl;
   return 0;
}
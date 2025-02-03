#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll k,s,count=0,x,y,z;
    cin>>k>>s;
    for(x=0; x<=k; x++){
        for(y=0; y<=k; y++){
           /* for(z=0; z<=k; z++)
            {
                if(x+y+z==s)
                {
                    count++;  time limite excced
                }
            }*/
            z = s-x-y;
        if(z>=0 && z<=k){
            ++count;
        }
       

        }
    }
    cout<<count<<endl;
    return 0;
}
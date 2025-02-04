#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j;
    cin>>a>>b>>c;
        for(i=0; i<=c; i+=a)
        {
            for(j=0; j<=c; j+=b){
            if(i + j == c){
            cout<<"YES"<<endl;
            return 0;

            }
        }    }
        cout<<"NO"<<endl;
        return 0;
}
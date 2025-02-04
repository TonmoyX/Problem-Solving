#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,g=0;
    string f="",s="";
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(f != s)
        {
            g++;
            f = s;
        }
    }
    cout<<g;

}

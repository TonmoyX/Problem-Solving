#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,m;
    cin>>a>>m;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==m[i])
        {
            cout<<"0";
        }
        else
            cout<<"1";
    }
}

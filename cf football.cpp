#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,x=0,y=0,z=0;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            x++;
            y=0;
        }
        else
        {
            y++;
            x=0;
        }
        if(x==7 || y==7)
     {
         z=1;
     }
    }if(z==1)
        cout<<"YES";
        else
            cout<<"NO";
}

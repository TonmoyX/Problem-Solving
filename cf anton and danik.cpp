#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,t,ant=0,dan=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='A')

            ant++;
            else if(s[i]=='D')
                dan++;
        }
    }
    if(ant==dan)
        cout<<"Friendship";
    else if(ant>dan)
        cout<<"Anton";
    else
        cout<<"Danik";

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,count=0;
    cin>>s;
    for(i=0; i<s.size(); i++)
        {
            if(s[i]=='4' || s[i]=='7')
                count++;

        }
        if(count==4 || count==7)
            cout<<"YES";
        else
            cout<<"NO";


}


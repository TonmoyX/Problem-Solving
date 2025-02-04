#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, w="hello";
    cin>>s;
int  i,  j =0;
    for(i=0; i<s.size(); i++)
    {
        if(w[j]==s[i])
        {
            j++;
        }
        if(j==5)
        {
            cout<<"YES";
           return 0;
        }

    }
     cout<<"NO";
        return 0;

}

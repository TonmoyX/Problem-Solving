#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int up=0, lo=0, i;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
            lo++;
    }

    if(up>lo)
    {
        for(i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
            cout<<s; 
}
        }

    }
      else
    {
        for(i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
            cout<<s; 
}
        }
    }

  //  cout<<s; 
}

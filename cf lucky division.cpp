#include<bits/stdc++.h>
//lucky number= 4,7,47,74,44,77,447,444,474,477,744,777,747,774
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ln={4,7,47,74,44,77,444,474,477,777,747,774};
    for(int i=0; i<ln.size(); i++)
    {
         if(n%ln[i]==0)
    {
        cout<<"YES";
        return 0;
    }
    }

    cout<<"NO";
}

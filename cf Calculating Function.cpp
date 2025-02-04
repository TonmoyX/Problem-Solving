#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,b;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2;
    }
    else
    {
        b = -(n/2 + 1);
        cout<<b;
    }

}

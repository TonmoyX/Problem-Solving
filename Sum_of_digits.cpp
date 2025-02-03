#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll sum_of_digits(ll n)
{
    int sum=0;
    while(n>0)
    {
        int ld = n % 10;
       sum+=ld;
     n = n/10;
    }
    return sum;
}
int main()
{
    
    ll digit_sum=0,ans=0;
    char s[100005];
    cin>>s;
    int ln = strlen(s);
    if(ln==1)
    {
        cout<<'0'<<endl;
        return 0;
    }
    for(int i=0; i<ln; i++)
    {
         digit_sum+=s[i]-'0'; //'0' asci value = 48, tha's why it's minus here. as if we can find 1 for 1, 2 for 2.
    }
    ans++;
    ll n;
    n = digit_sum;
    while(n>9)
    {
    n = sum_of_digits(n);
    ans++;
    }
    cout<<ans<<endl;
    return 0;
}
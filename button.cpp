#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans =0;
    ans = max(ans,a+(a-1));
    ans = max(ans,b+(b-1));
    ans = max(ans,a+b);
    cout<<ans<<endl;
}
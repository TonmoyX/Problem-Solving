#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n, i, fact=1;
    cin>>n;
    for( i=1; i<=n; i++){
     fact *= i;
    }
    cout<<fact<<endl;

    return 0;
}
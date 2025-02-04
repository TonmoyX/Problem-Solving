#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0, sum2=0, count=0;
    cin>>a;
    int B[a];
    for(int i=0; i<a; i++)
    {
        cin>>B[i];
        sum+=B[i];

    }
    sum  = sum/2;
        sort(B,B+a);
    for(int j=a-1; j>=0; j--)
    {
        sum2+=B[j];
        count++;
        if(sum<sum2)break;
    }
    cout<<count;
}

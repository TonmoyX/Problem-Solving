#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,arr[4],count=0;
    for(i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for(i=0; i<3; i++)
    {
        if(arr[i]==arr[i+1])
            count++;
    }

    cout<<count;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
   int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
{int n,i,v;
cin>>n;
vector<int>cubes;
for(i=0; i<n; i++)
{
    cin>>v;
    cubes.push_back(v);
}
sort(cubes.begin(),cubes.end());
for(auto x: cubes)
{
    cout<<x<<" ";
}

}
*/

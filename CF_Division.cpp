#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void ans()
{
    ll rating;
    cin>>rating;
    if(rating>=1900)
    cout<<"Division 1"<<endl;
    else if(rating>=1600 && rating<=1899)
    cout<<"Division 2"<<endl;
    else if(rating>=1400 && rating<=1599)
    cout<<"Division 3"<<endl;
    else if(rating<=1399)
    cout<<"Division 4"<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ans();
    }
}
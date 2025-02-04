#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,s,i,l=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        s = a+b+c;
        if(s>=2 && s>0)
            l++;
    }
        cout<<l<<endl;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i,count=0;
    string s;
    cin>>t;
    cin>>s;
    for(i=0; i<t; i++)
    {

        s[i]=toupper(s[i]);


   if(s[i]==s[i+1])
            count++;
    }

    cout<<count<<endl;

}

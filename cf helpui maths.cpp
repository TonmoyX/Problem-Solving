#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i,j;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
         for(j=0; j<s.size()-1; j=j+2)
         {
             if(s[j]>s[j+2])
             {
                 swap(s[j],s[j+2]);
             }
         }
    }
cout<<s<<endl;


}

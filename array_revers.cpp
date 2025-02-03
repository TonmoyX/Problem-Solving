#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();   //cin.getchar()->just one word or white space take intpun 
    char s[100];
    for(int i=0; i<n; i++)
    {
        cin.getline(s,100);
        cout<<s<<endl;
    } 
 /* int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)s
    {
        cin>>a[i];
    }                      //[his program: \array revarse\]
    int b[n];
    int b_index=0;
    for(int a_index = n-1; a_index >=0; a_index--)
    {
        b[b_index]=a[a_index];
        b_index++;
    }
    for(int i=0; i<n; i++)
    {
        a[i]=b[i];
       
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }*/  

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    char l1;
    int i;
    cin>>a;
    cin>>b;

    int lena = a.size();
    int lenb = b.size();
    string full=a+b;
        l1 = a[0];
        a[0] = b[0];
        b[0] = l1;

    cout<<lena<<" "<<lenb<<endl;
        cout<<full<<endl;
        cout<<a<<" "<<b<<endl;
}
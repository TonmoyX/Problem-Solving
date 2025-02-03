#include<bits/stdc++.h>
using namespace std;
const int n = 1e6+9;
char s[n];
int main(){
   cin>>s;
    int len = strlen(s);
    for(int i=0; i<len; i++){
        if(s[i]=='a'||s[i]=='b'||s[i]=='c'||s[i]=='d'||s[i]=='e'||s[i]=='f'||s[i]=='g'||s[i]=='h'||s[i]=='i'||s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='m'||s[i]=='n'||s[i]=='o'||s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'||s[i]=='t'||s[i]=='u'||s[i]=='v'||s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z'){
          s[i]=s[i]-32;  
        }
        else if(s[i]==','){
            s[i]=' ';
        }
        else{
            s[i]=s[i]+32;
        }
    }
    cout<<s<<endl;

}
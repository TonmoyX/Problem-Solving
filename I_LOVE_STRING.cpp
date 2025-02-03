#include<bits/stdc++.h>
using namespace std;
const int n = 55;
char s[n], t[n];
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin >> s >> t;
        int len_s = strlen(s);
        int len_t = strlen(t);
        for(int i=0; i<max(len_s, len_t); i++){
            if(i<len_s){
                cout<<s[i];
            }
            if(i<len_t){
                cout<<t[i];
            }
        }
        cout<<endl;
    }
}

/*{
    string s;
    string t;
    int tc;
    cin>>tc;
    while(tc--){
        cin>>s>>t;
        if(s>t || s==t){
        for(int i=0; i<s.size(); i++)
        {
          cout<<s[i]<<t[i];
        }   
        cout<<endl; 
        }
        else if(t>s){
            for(int i=0; i<t.size(); i++)
        {
          cout<<s[i]<<t[i];
        }   
        cout<<endl;
        }
        
    }
}
*/
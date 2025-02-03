#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int a[n+1], b[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];

    }
    for(int i=1; i<=n; i++){

        cin>>b[i];
    }
    sort(a+1, a+n+1);
    sort(b+1, b+n+1);
    int count=0;
    for(int i=1; i<=n; i++){
    
            if(a[i]!=b[i])
            {
                cout<<"no"<<endl;
                return 0;
            }
        
    }
    cout<<"yes"<<endl;
   return 0;
}
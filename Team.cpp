#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, a,b,c,count=0;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int sum = a+b+c;
        if(sum>=2 && sum>0){
            count++;
        }
        
    }cout<<count<<endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    for(x=0; x<10; ++x){
cout<<x<<endl;
    }
    

}
*/
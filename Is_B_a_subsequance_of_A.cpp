#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    long long int a[n1+1];
    for(int i=1; i<=n1; i++){
        cin>>a[i];
    }
    
   long long int b[n2+1];
    for(int i=1; i<=n2; i++){
        cin>>b[i];
    }
 int current_index_a=1;
 for(int i=1; i<=n2; i++){
    bool found_element = false;

    while(current_index_a<=n1){
        if(a[current_index_a]==b[i]){
            found_element = true;
            current_index_a++;
            break;
        }
        else{
            current_index_a++;
        }
    }
    if(!found_element){
        cout<<"NO"<<endl;
        return 0;
    }
    
 }
 cout<<"YES"<<endl;
 return 0;
  
}
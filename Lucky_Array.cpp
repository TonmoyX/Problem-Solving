#include<bits/stdc++.h>
const int inf=1e6;
using namespace std;
int main(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int minimum_element=inf;
    for(int i=0; i<n; i++){
        minimum_element = min(minimum_element, a[i]);
    }
    int frequency = 0;
    for(int i=0; i<n; i++){
        if(minimum_element==a[i]){
            frequency++;
        }
    }
    if(frequency%2==0){
        cout<<"Unlucky"<<endl;        
    }
    else{
        cout<<"Lucky"<<endl;
    }
}
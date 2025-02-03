#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n ;i++){
        cin>>a[i];
    }
    int maxi=-10^5;
    int position_of_maxi=-1;
    int mini=10^5;
    int position_of_mini=-1;
    for(int i=1; i<=n; i++){
        if(a[i]>maxi){
        maxi = max(a[i], maxi);
        position_of_maxi=i;
}}
    for(int i=1; i <=n;i++){
      if(a[i]<mini){
        mini = min(a[i], mini);
        position_of_mini=i;
    }}
    swap(a[position_of_maxi], a[position_of_mini]);
    for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
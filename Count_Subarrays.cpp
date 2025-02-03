#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;    int count=0;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
    int non_decresing_subarray=0;
        for(int l=1; l<=n; l++){
            for(int r=l; r<=n; r++){
                    int is_non_decresing=true;
             for(int i=l; i<r; i++){
                if(a[i]>a[i+1]){
                    is_non_decresing=false;
                }
             }
             if(is_non_decresing)
             non_decresing_subarray++;
            }
        }   
         cout<<non_decresing_subarray<<endl;
    }
   
    
}
#include<bits/stdc++.h>
using namespace std;
const int inf=-1e5;
int main(){
    int test_case;
    cin>>test_case;
    while(test_case--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        for(int l=1; l<=n; l++){
            for(int r=l; r<=n; r++){
                int maximum_subarray_list=-1e5;
                for(int i=l; i<=r; i++){
                   maximum_subarray_list = max(maximum_subarray_list, a[i]);
                }
                cout<<maximum_subarray_list<<" ";
            }
        }   cout<<endl;  
}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
    int X;
    cin>>X;
   int first_position=-1;
    for(int i=0; i<N; i++){
        if(A[i]==X){
            first_position = i;
            break;
        }
    } 
    cout<<first_position<<endl;
    return 0;
}
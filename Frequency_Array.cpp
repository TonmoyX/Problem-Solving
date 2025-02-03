#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int A[N];
    for(int i=1; i<=N; i++){
        cin>>A[i];
    }
    int frequency[M+1];
    for(int i=1; i<=M; i++){
      frequency[i]=0;   
    }
    for(int i=1; i<=N; i++){
        frequency[A[i]]++;
    }
    for(int i=1; i<=M; i++){
        cout<<frequency[i]<<endl;
    }
    return 0;


/*for(int i=1; i<=M; i++){
    int count=0;
    for(int j=1; j<=N; j++){
        if(A[j]==i){
            count++;
            
        }
       
    } cout<<count<<endl;
}*/


}
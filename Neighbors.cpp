#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   char arr[101][101];
   for(int i=1; i<=n; i++){
      for(int j=1; j<=m; j++){
         cin>>arr[i][j];
      }
   }
   int index1, index2;
   cin>>index1>>index2;
   if(arr[index1][index2-1]!='.' && 
   arr[index1-1][index2-1]!='.' && 
   arr[index1-1][index2]!='.'&&
   arr[index1-1][index2+1]!='.'&& 
   arr[index1][index2+1]!='.'&& 
   arr[index1+1][index2-1]!='.'&& 
   arr[index1+1][index2]!='.' && 
   arr[index1+1][index2+1]!='.'){
      cout<<"yes"<<endl;
   }
   else{
      cout<<"no"<<endl;
   }
   }
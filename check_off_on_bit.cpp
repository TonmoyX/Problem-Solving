#include<bits/stdc++.h>
int check_bits(int x, int k){
    return(x>>k)&1;
}
int check_on_bits(int x){
    int ans=0;
    for(int k=0; k<32; k++)
    {
        if(check_bits(x,k))
        {
        ans++;
        }
       
    }
    return ans;
}
int main()
{ 
      cout<<check_on_bits(11);
      return 0;  
}
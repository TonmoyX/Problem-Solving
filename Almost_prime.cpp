#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    int divisor = 0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            divisor++;
        }
    }
    if(divisor==2){
 return true;
    } 
    else{
 return false;
    }
   
}
bool is_almost_prime(int n)
{
    int prime_divisor=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            if(is_prime(i))
            {
                prime_divisor++;
            }
        }
    }
    if(prime_divisor==2){
return true;
    }  
    else{
return false;
    }
    
}

int main()
{
    int n, ans=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(is_almost_prime(i)){
ans++;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}
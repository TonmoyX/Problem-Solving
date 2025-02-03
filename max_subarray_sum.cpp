#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    long long max_subarray = -1e18;
    long long max_subarray_so_far = -1e18;
    for(int l=0; l<n; l++)
    {     
          max_subarray_so_far = max((long long)a[l], a[l] + max_subarray_so_far);
            max_subarray = max(max_subarray, max_subarray_so_far);
    }
    cout<<max_subarray<<endl;
}//time limit O(n) complete within 1s.
/*int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    long long max_subarray= -1e18;
    long long current_subarray=0;
    for(int l=0; l<n; l++)
    {
        for(int r=l; r<n; r++)
        {
            for(int i=l; i<=r; i++)
            {
                current_subarray+=a[i];
            }
            max_subarray=max(max_subarray, current_subarray);
        } 
    }
    cout<<max_subarray<<endl;
}//time limit exceded o(n^3)
*/
/*int main()
{
       int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    long long max_subarray= -1e18;
    long long current_subarray=0;
    for(int l=0; l<n; l++)
    {
        for(int r=l; r<n; r++)
        {
            current_subarray+=a[r];
            max_subarray=max(max_subarray, current_subarray);
        } 
    }
    cout<<max_subarray<<endl;
}
//time limit exceded O(n^2)
*/
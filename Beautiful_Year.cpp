#include<bits/stdc++.h>
using namespace std;
bool is_beautiful_year(int n)
{
 
  int d4=n%10;
  n = n/10;
  int d3=n%10;
  n=n/10;
  int d2 = n%10;
  n = n/10;
  int d1=n;
  if(d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4)
  {
    return true;
  }
  else{
    return false;

  }
}
int main()
{
    int y;
    cin>>y;
    y++;
    while(true)
    {
      if(is_beautiful_year(y))
      {
        cout<<y<<endl;
        return 0;
      }
       y++;
    }
  return 0; 

}
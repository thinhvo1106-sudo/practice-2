#include<bits/stdc++.h>
using namespace std;
int n, g, r;
int main()
{
  cin>>r>>g;
  for( int n=1; n<=r; n++)
  if (r%n==0 && g%n==0)
  cout<<n<<" "<<r/n<<" "<<g/n<<endl;
}
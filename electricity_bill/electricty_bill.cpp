#include<bits/stdc++.h>
using namespace std;
int x1, x2, x3, x4, y, t;
int main()
{
  cin>>x1>>x2>>x3>>x4>>y;
  if(y<=50)
  t=x1*y;
  else
  if(y<=100)
  t=x1*50+(y-50)*x2;
  else
  if(y<=200)
  t=x1*50+x2*50+x3*(y-100);
  else
  if(y>=201)
  t=x1*50+x2*50+x3*100+x4*(y-200);
  cout<<t;
  
}
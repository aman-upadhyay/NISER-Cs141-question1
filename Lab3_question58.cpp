#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int n,d,r=0,p;
 cout<<"Enter a binary number\n";
 cin>>n;
 cout<<"Its one's complement-\n";
 p=n;

 while(n>=1)
 {
  n=n/10;
  r++;
 }
 for(int i=r;i>=1;i--)
 {
  d=p/(pow(10,i-1));
  if(d==0)
  d=1;
  else
  d=0;
  cout<<d;
  p=p%((int)pow(10,i-1));
 }
 cout<<"\n";
} 

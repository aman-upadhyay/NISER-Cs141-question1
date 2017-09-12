#include <iostream>
using namespace std;
int main()
{
 int n,j,i,d,s,q;
 cout<<"Enter a number\n";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  s=0;
  int p=i;
  while(p>=1)
  {
   q=1;
   d=p%10;
   for(j=1;j<=d;j++)
   {
    q=q*j;
   }
   s=s+q;
   p=p/10;
  }
  if(s==i)
  cout<<i<<" is a strong number\n";
 }
}


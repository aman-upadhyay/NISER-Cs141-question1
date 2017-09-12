#include <iostream>
using namespace std;
int strong(int s1,int n)
{
 int j,i,d,s,q;
 for(i=s1;i<=n;i++)
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
 int main()
{  int s,l;
   cout<<"Enter start no";
   cin>>s;
   cout<<"Enter last no";
   cin>>l;
   strong(s,l);
}

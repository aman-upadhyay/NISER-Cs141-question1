#include <iostream>
#include <cmath>
using namespace std;
int armstrong(int s1,int n)
{
int i,j,q,n1,rem;
for(i=s1;i<=n;i++)
{
int r=0,s=0;
q=i;
n1=i;
while(q>=1)
{
q=q/10;
r=r+1;
}
for(j=1;j<=r;j++)
{
rem=n1%10;
n1=n1/10;
s=s+pow(rem,r);
}
if(s==i)
cout<<i<<" is a Armstrong number\n";
}}

int main()
{ int s,l;
 cout<<"Enter start digit";
 cin>>s;
 cout<<"Enter last digit";
 cin>>l;
 armstrong(s,l);
}

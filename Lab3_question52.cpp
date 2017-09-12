#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int i,j,n,q,n1,rem;
cout<<"Enter a number\n";
cin>>n;
for(i=1;i<=n;i++)
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



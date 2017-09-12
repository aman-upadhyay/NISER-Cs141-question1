#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int i,n,q,n1,rem,r=0,s;
cout<<"Enter a number\n";
cin>>n;
q=n;
n1=n;
while(q>=1)
{
q=q/10;
r=r+1;
}
s=0;
for(i=1;i<=r;i++)
{
rem=n1%10;
n1=n1/10;
s=s+pow(rem,r);
}
if(s==n)
cout<<"The entered number is a Armstrong number\n";
else
cout<<"The entered number is not a Armstrong number\n";
}





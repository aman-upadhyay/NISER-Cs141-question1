#include <iostream>
using namespace std;
int main()
{
int rs,p=0,q=0,r=0,s=0,t=0,u=0,v=0;
cout<<"Enter the amount in rupees\n";
cin>>rs;
if(rs>=500)
{
p=rs/500;
rs=rs-(500*p);
}
if(rs>=100)
{
q=rs/100;
rs=rs-(100*q);
}
if(rs>=50)
{
r=rs/50;
rs=rs-(50*r);
}
if(rs>=20)
{
s=rs/20;
rs=rs-(20*s);
}
if(rs>=10)
{
t=rs/10;
rs=rs-(10*t);
}
if(rs>=5)
{
u=rs/5;
rs=rs-(5*u);
}
if(rs>=2)
{
v=rs/2;
rs=rs-(2*v);
}
cout<<"The number of Rs 500 notes is "<<p<<"\n";
cout<<"The number of Rs 100 notes is "<<q<<"\n";
cout<<"The number of Rs 50 notes is "<<r<<"\n";
cout<<"The number of Rs 20 notes is "<<s<<"\n";
cout<<"The number of Rs 10 notes is "<<t<<"\n";
cout<<"The number of Rs 5 notes is "<<u<<"\n";
cout<<"The number of Rs 2 coins is "<<v<<"\n";
cout<<"The number of Rs 1 coins is "<<rs<<"\n";
}

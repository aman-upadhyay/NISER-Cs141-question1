#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,c,d,root1,root2,rp,ip;
cout<<"General form of a quadratic equation is ax2 + bx + c = 0,\n";
cout<<"Enter the values of a,b and c\n";
cin>>a;
cin>>b;
cin>>c;
d=pow(b,2)-4*a*c;
if(d>0)
{
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
cout<<"The first root is "<<root1<<"\n";
cout<<"The second root is "<<root2<<"\n";
}
else if(d==0)
{
root1=root2=-b/(2*a);
cout<<"The first root is "<<root1<<"\n";
cout<<"The second root is "<<root2<<"\n";
}
else
{
rp=-b/(2*a);
ip=sqrt(-d)/(2*a);
cout<<"The first root is "<<rp<<"+i("<<ip<<")\n";
cout<<"The second root is "<<rp<<"-i("<<ip<<")\n";
}
}


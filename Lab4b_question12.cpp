#include<iostream>
using namespace std;
int n,hcf;
int Lcm(int a, int b)
{
if(n%a==0&&n%b==0)
return n;
else
{
n++;
Lcm(a,b);
}
}
int main()
{
int a,b;
cout<<"Enter first number \n";
cin>>a;
cout<<"Enter second number \n";
cin>>b;
if (a>b)
n=a;
else
n=b;
Lcm(a,b);
cout<<"LCM is "<<n<<"\n";
}

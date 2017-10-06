#include <iostream>
using namespace std;
int hcf(int a,int b)
{
 int p;
 if(a%b>0)
 {
  p=a%b;
  a=b;
  b=p;
  hcf(a,b);
 }
 else
 return b;
}
int main()
{
 int a,b;
 cout<<"Enter 1st number\n";
 cin>>a;
 cout<<"Enter 2nd number\n";
 cin>>b;
 cout<<"The hcf of two numbers is ";
 if(a>b)
 cout<<hcf(a,b);
 else
 cout<<hcf(b,a);
 cout<<"\n";
}

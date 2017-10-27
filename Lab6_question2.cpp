#include <iostream>
using namespace std;
int main()
{
 int a,b,*p=&a;
 cout<<"Enter the values of a and b\n";
 cin>>a>>b;
 b=*p;
 cout<<"a="<<a<<"\n";
 cout<<"b="<<b<<"\n";
 cout<<"*p="<<*p<<"\n";
 a=2,b=3;
 cout<<"a="<<a<<"\n";
 cout<<"b="<<b<<"\n";
 cout<<"*p="<<*p<<"\n";
 p=&b;
 cout<<"a="<<a<<"\n";
 cout<<"b="<<b<<"\n";
 cout<<"*p="<<*p<<"\n";
}

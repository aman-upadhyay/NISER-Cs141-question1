#include <iostream>
using namespace std;
void max(int a,int b)
{
 if(a>b)
 cout<<"The maximum of the two numbers is "<<a<<"\n";
 else if(b>a)
 cout<<"The maximum of the two numbers is "<<b<<"\n";
 else
  cout<<"Please enter diffrent numbers\n";
}
void min(int a,int b)
{
 if(a<b)
 cout<<"The minimum of the two numbers is "<<a<<"\n";
 else if(b<a)
 cout<<"The minimum of the two numbers is "<<b<<"\n";
}
int main()
{
 cout<<"Enter two numbers\n";
 int a1,b1;
 cin>>a1;
 cin>>b1;
 max(a1,b1);
 min(a1,b1);
}


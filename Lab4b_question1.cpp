#include<iostream>
using namespace std;
int pow(int n,int m)
{ 
if (m >=1)
  return  n*pow(n,m-1);
 else
 return 1;
}
int main()
{
 int n,m,r;
 cout<<"Enter base";
 cin>>n;
 cout<<"Enter index";
 cin>>m;
 
 r = pow(n,m);
 cout<<"The power of the number is"<<r;
}

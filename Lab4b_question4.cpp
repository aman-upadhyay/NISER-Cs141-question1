#include<iostream>
using namespace std;
int sum(int n)
{
 int s=0;
 if (n!=0)
  s=n+sum(n-1);
 else 
  return s;
}
int main()
{
 int n;
 cout<<"Enter a Number\n";
 cin>>n;
 cout<<sum(n);
}

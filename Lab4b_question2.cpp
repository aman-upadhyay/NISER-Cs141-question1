#include<iostream>
using namespace std;
int i =1;
int n;
int nat(int i)
{
if (i<=n)
{
 cout<<i<<"\n";
 i=i+1;
 nat(i);
}
 else
  return 1;
}
int main()
{
 cout<<"Enter a number";
 cin>>n; 
 nat(i);
}

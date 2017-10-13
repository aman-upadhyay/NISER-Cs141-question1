#include <iostream>
using namespace std;
int n,s;
int sum(int a[])
{
 for(int j=0;j<n;j++)
 {
  s=s+a[j];
 }
 return s;
}
int main()
{
 cout<<"Enter the length of the array\n";
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
  cout<<"Enter the "<<i+1<<"th element ";
  cin>>a[i];
 }
 cout<<"The sum of all the elements of the array= "<<sum(a)<<"\n";
}


#include <iostream>
using namespace std;
int i=0,s=0,n;
int sum(int a[])
{
 if(i<n)
 {
  s=s+a[i];
  i++;
  sum(a);
 }
 return s;
}
int main()
{
 cout<<"Enter the size of the array\n";
 cin>>n;
 int a[n];
 for(int j=0;j<n;j++)
 {
  cout<<"Enter the "<<j<<"th element\n";
  cin>>a[j];
 }
 cout<<"The sum of all the elements of the array is "<<sum(a)<<"\n";
}


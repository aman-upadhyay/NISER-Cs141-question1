#include<iostream>
using namespace std;
int i=0,n;
int ar(int a[])
{
 if(i<n)
 {
  cout<<a[i]<<" ";
  i++;
  ar(a);
 }
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
 ar(a);
}


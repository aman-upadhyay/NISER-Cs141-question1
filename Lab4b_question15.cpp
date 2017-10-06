#include <iostream>
using namespace std;
int n,i=0,j=1,p,q;
int max(int a[])
{
 if(i<n)
 {
  if(a[i]>a[j])
  {
   p=a[i];
   j++;
   max(a);
  }
  else
  {
   p=a[j];
   i++;
   max(a);
  }
 }
 return p;
}
int min(int a[])
{
 if(i<n)
 {
  if(a[i]<a[j])
  {
   q=a[i];
   j++;
   min(a);
  }
  else
  {
   q=a[j];
   i++;
   min(a);
  }
 }
 return q;
}
int main()
{
 cout<<"Enter the size of the array\n";
 cin>>n;
 int a[n];
 for(int k=0;k<n;k++)
 {
  cout<<"Enter the "<<k<<"th element\n";
  cin>>a[k];
 }
 cout<<"The maximum element of the array is "<<max(a)<<"\n";
 i=0,j=1;
 cout<<"The minimum element of the array is "<<min(a)<<"\n";
}



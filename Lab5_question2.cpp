#include <iostream>
using namespace std;
int n;
int largest(int a[])
{
 cout<<"The largest element of the array= "<<a[n-1]<<"\n";
}
int smallest(int a[])
{
 cout<<"The smallest element of the array= "<<a[0]<<"\n";
}
int mean(int a[])
{
 int s=0;
 for(int i=0;i<n;i++)
 {
  s=s+a[i];
 }
 float m=(float)s/n;
 cout<<"The mean of the array elements= "<<m<<"\n";
}
int median(int a[])
{
 if(n%2!=0)
 {
  cout<<"The median= "<<a[((n-1)/2)+1]<<"\n";
 }
 else
 {
  cout<<"The median= "<<(a[(n-1)/2]+a[((n-1)/2)+1])/2<<"\n";
 }
}
int mode(int a[])
{
 int p=0,max=0,k,i;
 for(int j=0;j<n;j++)
 {
  p=0;
  for(i=j;i<n;i++)
  {
   if(a[i]==a[i+1])
   { 
    p++;
   }
   else
   {
    break;
   }
  }
 if(p+1>=max)
 {
  max=p+1;
  k=a[i];
 }
}
 cout<<"The element with maximum frequency= "<<k<<"\n";
 cout<<"Its frequency= "<<max<<"\n";
}
int main()
{
 int p;
 cout<<"Enter the size of the array\n";
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
  cout<<"Enter the "<<i+1<<"th element\n";
  cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
  for(int j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    p=a[i];
    a[i]=a[j];
    a[j]=p;
   }
  }
 }
 largest(a);
 smallest(a);
 mean(a);
 median(a);
 mode(a);
}
     
  
   


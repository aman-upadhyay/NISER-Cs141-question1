#include <iostream>
using namespace std;
int n1=0,n2=0,n3=0;
int merge(int a1[],int a2[],int a3[])
{
 for(int i=0;i<n1;i++)
 {
  a3[i]=a1[i];
 }
 int k=0;
 for(int i=n1;i<n1+n2;i++)
 {
  a3[i]=a2[k];
  k++;
 }
}
int max(int a3[])
{
 cout<<"The maximum element of the two arrays= "<<a3[n3-1]<<"\n";
}
int min(int a3[])
{
 cout<<"The minimum element of the two arrays= "<<a3[0]<<"\n";
} 
int main()
{
 int p;
 cout<<"Enter the size of the first array= ";
 cin>>n1;
 int a1[n1];
 for(int i=0;i<n1;i++)
 {
  cout<<"Enter the "<<i+1<<"th element ";
  cin>>a1[i];
 }
 cout<<"Enter the size of the second array= ";
 cin>>n2;
 int a2[n2];
 for(int i=0;i<n2;i++)
 {
  cout<<"Enter the "<<i+1<<"th element ";
  cin>>a2[i];
 }
 n3=n1+n2;
 int a3[n3];
 merge(a1,a2,a3);
 for(int i=0;i<n3;i++)
 {
  for(int j=i+1;j<n3;j++)
  {
   if(a3[i]>a3[j])
   {
    p=a3[i];
    a3[i]=a3[j];
    a3[j]=p;
   }
  }
 }
 max(a3);
 min(a3);
}

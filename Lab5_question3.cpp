#include <iostream>
using namespace std;
int klarge(int array[],int size,int k)
{
 cout<<"The kth largest element is "<<array[size-k]<<"\n";
}
int ksmall(int array[],int size,int k)
{
 cout<<"The kth smallest element is "<<array[k-1]<<"\n";
}
int main()
{
 int p,size,k;
 cout<<"Enter the size of the array\n";
 cin>>size;
 int array[size];
 for(int i=0;i<size;i++)
 {
  cout<<"Enter the "<<i+1<<"th element\n";
  cin>>array[i];
 }
 cout<<"Enter k to find the kth largest and smallest element of the array\n";
 cin>>k;
 for(int i=0;i<size;i++)
 {
  for(int j=i+1;j<size;j++)
  {
   if(array[i]>array[j])
   {
    p=array[i];
    array[i]=array[j];
    array[j]=p;
   }
  }
 }
klarge(array,size,k);
ksmall(array,size,k);
}

#include <iostream>
using namespace std;
int main()
{
 int a[10],*ap=a;
 for(int i=0;i<10;i++)
 {
  cout<<"Enter the "<<(i+1)<<"th element\n";
  cin>>a[i];
 }
 cout<<"Printing the array elements by normal indexing method\n";
 for(int i=0;i<10;i++)
 {
  cout<<a[i]<<" ";
 }
 cout<<"\nPrinting the array elements by using pointers\n";
 for(int i=0;i<10;i++)
 {
  cout<<*(ap+i)<<" ";
 }
}


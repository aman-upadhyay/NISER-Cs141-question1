#include <iostream>
using namespace std;
int main()
{
 int n,r=0;
 cout<<"Enter a number\n";
 cin>>n;
 cout<<"The prime numbers between 1 to n are-\n";
 for(int i=1;i<=n;i++)
 {
  for(int j=1;j<=i;j++)
  {
   if(i%j==0)
   r++;
  }
  if(r==2)
  cout<<i<<"\n";
  r=0;
 }
} 

#include <iostream>
using namespace std;
int main()
{
 int n,r=0;
 cout<<"Enter a number\n";
 cin>>n;
 cout<<"The prime factors are-";
 for(int i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   for(int j=1;j<=i;j++)
   {
    if(i%j==0)
    {
    r++;
    }
   }
   if(r==2)
   {
    cout<<i<<"\n";
   }
   r=0; 
  } 
 }
}

  

#include <iostream>
using namespace std;
int main()
{
 int n,i,d,s=0,q;
 cout<<"Enter a number\n";
 cin>>n;
 int p=n;
 while(n>=1)
 {
  q=1;
  d=n%10;
  for(i=1;i<=d;i++)
  {
   q=q*i;
  }
  s=s+q;
  n=n/10;
 }
 if(s==p)
 cout<<"The entered number is a strong number\n";
 else
 cout<<"The entered number is not a strong number\n";
}


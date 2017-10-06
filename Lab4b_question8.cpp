#include <iostream>
using namespace std;
int s=0;
int sum(int n)
{
 int d;
 d=n%10;
 if(n>=1)
 {
  s=s+d;
  sum(n/10);
  return s;
 }
 else
 return 0;
}
int main()
{
 int n;
 cout<<"Enter a number\n";
 cin>>n;
 cout<<"The sum of the digits of the number is "<<sum(n)<<"\n";
}

 


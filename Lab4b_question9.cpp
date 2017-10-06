#include <iostream>
using namespace std;
int fact(int n)
{
 int f;
 if(n>=1)
 {
  f=n*fact(n-1);
  return f;
 }
 else
 return 1;
}
int main()
{
 int n;
 cout<<"Enter a number\n";
 cin>>n;
 cout<<"The factorial of the number is "<<fact(n)<<"\n";
}



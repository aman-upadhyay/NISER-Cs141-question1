#include <iostream>
using namespace std;
int main()
{
 int b,p,n=1;
 cout<<"Enter the base and power\n";
 cin>>b>>p;
 for(int i=1;i<=p;i++)
 {
  n=n*b;
 }
 cout<<"The power of the number is "<<n<<"\n";
}


#include <iostream>
using namespace std;
int main()
{
int x,n,r;
cout<<"Enter a number to count number of digits in it\n";
cin>>x;
r=x;
n=0;
   while(x>0){
   x=x/10;
   n=n+1;
  } cout<<"Number of digits in "<<r<<" is "<<n;    
}

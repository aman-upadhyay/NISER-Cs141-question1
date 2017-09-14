#include <iostream>
using namespace std;
int main()
{
int x,n,b,s;
cout<<"Enter the odd number till you need to find the sum of\n";
cin>>n;
 x=1;
 s=0;
  while(x<=((n+1)/2)){
       b =(2*x)-1; 
       s=s+b;
       x=x+1;
 } cout<<"Sum of odd number till "<<n<<" is "<<s;
}

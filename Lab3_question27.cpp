#include <iostream>
using namespace std;
int main()
{
int n,x,b;
 cout<<"Enter last Number of series(n)\n";
 cin>>n;
 x=1;
  while(x<=n){
       b=b+x;  
       x=x+1;
 } cout<<"Sum of all natural no between 1 to n is "<<b;
}

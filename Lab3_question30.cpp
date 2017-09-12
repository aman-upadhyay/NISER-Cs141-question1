#include <iostream>
using namespace std;
int main()
{
int n,b,x;
cout<<"Enter a digit to find it's table";
cin>>n;
b=1;
 while (b<=10){
 x=b*n;
 cout<<n<<"X"<<b<<"="<<x<<"\n";
 b=b+1;
 }
}

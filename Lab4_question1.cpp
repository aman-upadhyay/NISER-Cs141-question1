#include <iostream>
#include <cmath>
using namespace std;
int cube(int n)
{ 
 int c=pow(n,3);
 return c;
}
int main()
{
 int p;
 cout<<"Enter a number\n"; 
 cin>>p;
 cout<<"The cube of the number is "<<cube(p)<<"\n";
}


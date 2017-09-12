#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter the three sides of a triangle \n";
cin>>a;
cin>>b;
cin>>c;
if((a+b)>c &&(a+c)>b &&(b+c)>a)
cout<<"The triangle is valid\n";
else 
cout<<"The triangle is not valid\n";
}


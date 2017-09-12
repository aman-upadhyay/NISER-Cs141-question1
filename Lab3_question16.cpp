#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout <<"Enter the three sides of the triangle\n";
cin>>a;
cin>>b;
cin>>c;
if(a==b && a==c)
cout<<"The triangle is equilateral\n";
else if(a==b || a==c ||b==c)
cout<<"The triangle is isosceles\n";
else
cout<<"The triangle is scalene\n";
}


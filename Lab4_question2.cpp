#include <iostream>
using namespace std;
float diameter(float r)
{
 float d=2*r;
 return d;
}
float circumference(float r)
{
 float c=2*3.14*r;
 return c;
}
float area(float r)
{
 float a=3.14*r*r;
 return a;
}
int main()
{
 float rad;
 cout<<"Enter the radius of the circle\n";
 cin>>rad;
 cout<<"The diameter is "<<diameter(rad)<<"\n";
 cout<<"The circumference is "<<circumference(rad)<<"\n";
 cout<<"The area is "<<area(rad)<<"\n";
}


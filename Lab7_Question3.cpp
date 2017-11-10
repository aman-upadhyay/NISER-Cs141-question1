 
#include <iostream>
using namespace std;

class Rectangle
{
  public:
  double length;
  double breadth;
  double perimeter(double len, double bre);    
  double area(double len, double bre);          
};

double Rectangle::perimeter(double l,double b)
{ 
  return l+b;
}
double Rectangle::area(double l,double b)
{
  return l*b;
}

int main()
{
   
   Rectangle RL1, RL2;
   double ar1,ar2,per1,per2;
   cout<<"\nEnter the length of FIRST rectangle: ";
   cin>>RL1.length;
   cout<<"\n \nEnter the breadth of FIRST rectangle: ";
   cin>>RL1.breadth;
   cout<<"\n \nEnter the length of SECOND rectangle: ";
   cin>>RL2.length;
   cout<<"\n \nEnter the breadth of SECOND rectangle: ";
   cin>>RL2.breadth;
   ar1=RL1.area(RL1.length,RL1.breadth);
   per1=RL1.perimeter(RL1.length,RL1.breadth);
   ar2=RL2.area(RL2.length,RL2.breadth);
   per2=RL2.perimeter(RL2.length,RL2.breadth);
   if(ar1>ar2)
   { 
     cout<<"\nArea of Rectangle 1 is greater than Rectangle 2";
   }
   else if(ar1<ar2)
   { 
     cout<<"\nArea of Rectangle 2 is greater than Rectangle 1";
   }
   else
   {
     cout<<"\nArea of Rectangle 1 and Rectangle 2 are equal";
   }
   if(per1>per2)
   { 
     cout<<"\nPerimeter of Rectangle 1 is greater than Rectangle 2";
   }
   else if(per1<per2)
   { 
     cout<<"\nPerimeter of Rectangle 2 is greater than Rectangle 1";
   }
   else
   {
     cout<<"\nPerimeter of Rectangle 1 and Rectangle 2 are equal\n";
   }
   return 0;
 }
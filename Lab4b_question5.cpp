#include<iostream>
using namespace std;
int s1=0,s2=0;
int odd(int u, int l)
{
 if (l%2!=0)
 {
  if (l<=u)
  {
   s1=s1+l;
   l=l+2;
   odd(u,l); 
  }
 }
 else 
 {
  if (l<=u)
  {
   s1=s1+(l+1);
   l=l+2;
   odd(u,l);
  }
 } 
return s1;
}
int even(int u, int l)
{
 if (l%2==0)
 {
  if (l<=u)
  {
   s2=s2+l;
   l=l+2;
   even(u,l);
  }
 }
 else          
 {
  if (l<=u)
  {
   s2=s2+(l+1);
   l=l+2;
   even(u,l);
  }
 }
 return s2;
}

int main()
{
  int u,l;
  cout<<"Enter the upper bound\n";
  cin>>u;
  cout <<"Enter the lower bound\n";
  cin>>l;
  cout<<"The sum of even numbers is: "<<even(u,l)<<"\n";
  cout<<"The sum of odd numbers is: "<<odd(u,l)<<"\n";
}


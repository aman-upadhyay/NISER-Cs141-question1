#include<iostream>
using namespace std;
int odd(int u, int l)
{
 if (l%2!=0)
 {
  if (l<=u)
  {
   cout<<l<<"\n";
   l=l+2;
   odd(u,l);
  }
 }
 else 
 {
  if (l<=u)
  {
   cout<<(l+1)<<"\n";
   l=l+2;
   odd(u,l);
  }
 }
}
int even(int u, int l)
{
 if (l%2==0)
 {
  if (l<=u)
  {
   cout<<l<<"\n";
   l=l+2;
   even(u,l);
  }
 }
 else          
 {
  if (l<=u)
  {
   cout<<(l+1)<<"\n";
   l=l+2;
   even(u,l);
  }
 }
}

int main()
{
  int u,l;
  cout<<"Enter the upper bound\n";
  cin>>u;
  cout <<"Enter the lower bound\n";
  cin>>l;
  cout<<"Even numbers are:\n";
  even(u,l);
  cout<<"Odd numbers are:\n";
  odd(u,l);
}

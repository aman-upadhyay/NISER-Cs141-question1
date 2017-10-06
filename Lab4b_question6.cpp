#include<iostream>
using namespace std;
int r=0;
 int rev(int n)
 { 
   int d;
   d=n%10;
   if (n!=0)
{
   r=r*10+d;
   rev(n/10);
}  
  else 
   return r;
}
 int main()
{  
int n;
 cout<<"Enter a number";
 cin>>n;
 cout<<rev(n);
}

#include <iostream>
using namespace std;
int r =0;
int pal(int n)
{ 
 int d;
 d=n%10;
 if (n!=0)
 {
  r=(r*10)+d;
  pal(n/10);
 }  
 else 
 return r;
}
int main()
{  
int n;
cout<<"Enter a number\n";
cin>>n;
if(pal(n)==n)
cout<<"The number is a palindrome number\n";
else
cout<<"The number is not a palindrome number\n";
}

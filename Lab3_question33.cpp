#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int x,n,r,f,l,p,z;
cout<<"Enter a number to find sum of its first and last digits\n";
cin>>x;
r=x;
n=0;
while(x>0){
     x=x/10;
     n=n+1;
} 
p = pow(10,(n-1));
f = r/p;
l = r%10;
z = f+l;
cout<<"Sum of First and last digit of "<<r<<" is "<<z;
}

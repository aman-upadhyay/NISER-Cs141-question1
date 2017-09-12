#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int x,n,r,f,l,p,mi,mf,g;
cout<<"Enter a number to swap first and last digit of it\n";
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
mi = r%p;
mf = mi/10;
g = l*p+mf*10+f;
cout<<"Your Number is "<<g;
}

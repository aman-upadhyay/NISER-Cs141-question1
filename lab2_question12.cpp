#include<iostream>
#include<cmath>
using namespace std;

int main ()
 {

double p,r,t,i,n,a,b,c;
cout<< "Enter principle amount";
cin>>p;
cout<< "Enter rate ";
cin>>r;
cout<< "Enter time";
cin>>t;
cout<< "Enter how many time Intrest has to ba calculated in one year";  //yes this is an input
cin>>n;
a = r/n;
b = n*t;
c = p*(1+a);
i = pow(c,b);
cout<< "Compound Intrest is "<<i;

return 0;
}


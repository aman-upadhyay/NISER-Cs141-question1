#include <iostream>
using namespace std;
int main()
{
int p,c,b,m,comp;
float t,tot,per;
cout<<"Enter the marks of Physics\n";
cin>>p;
cout<<"Enter the marks of Chemistry\n";
cin>>c;
cout<<"Enter the marks of Biology\n";
cin>>b;
cout<<"Enter the marks of Mathematics\n";
cin>>m;
cout<<"Enter the marks of Computer\n";
cin>>comp;
cout<<"Enter the total marks\n";
cin>>tot;
t=p+c+b+m+comp;
per=(t/tot)*100;
cout<<"Your percentage is "<<per<<"\n";
if(per>=90)
cout<<"Grade A\n";
else if(per>=80 && per<=90)
cout<<"Grade B\n";
else if(per>=70 && per<=80)
cout<<"Grade C\n";
else if(per>=60 && per<=70)
cout<<"Grade D\n";
else if(per>=40 && per<=60)
cout<<"Grade E\n";
else
cout<<"Grade F\n";
}
 



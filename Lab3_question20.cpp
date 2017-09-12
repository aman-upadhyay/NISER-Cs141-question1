#include <iostream>
using namespace std;
int main()
{
float bs,gs,hra,da;
cout<<"Enter the basic salary of the employee\n";
cin>>bs;
if(bs<=10000)
{
hra=0.20*bs;
da=0.80*bs;
}
else if(bs>=10000 && bs<=20000)
{
hra=0.25*bs;
da=0.90*bs;
}
else
{
hra=0.30*bs;
da=0.95*bs;
}
gs=bs+da+hra;
cout<<"The gross salary=Rs."<<gs<<"/n";
}



#include <iostream>
using namespace std;
int main()
{
float cp,sp,p;
cout<<"Enter the cost price\n";
cin>>cp;
cout<<"Enter the selling price\n";
cin>>sp;
if(cp>sp)
{
p=cp-sp;
cout<<"You have incurred a loss of Rs."<<p<<"\n";
}
else if(sp>cp)
{
p=sp-cp;
cout<<"You have made a profit of Rs."<<p<<"\n";
}
else
cout<<"No profit or loss\n";
}

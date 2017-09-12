#include <iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter a month number\n";
cin >>n;
if(n==2)
cout<<"It can have 28 or 29 days basing on leap year or not\n";
else if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
cout <<"It has 31 days\n";
else
cout <<"It has 30 days\n";
}


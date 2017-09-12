#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout << "Enter three numbers"<<"\n";
cin >> a;
cin >> b;
cin >> c;
if (a>b && a>c)
cout << "The maximum of the three numbers is "<<a<<"\n";
else if(b>a && b>c)
cout << "The maximum of the three numbers is "<<b<<"\n";
else 
cout << "The maximum of the three numbers is "<<c<<"\n";
}



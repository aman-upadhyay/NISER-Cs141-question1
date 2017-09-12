#include <iostream>
using namespace std;
int main()
{
int a;
cout << "Enter the year \n";
cin >> a;
if (a%100==0)
{
if ((a/100)%2==0)
{
if (a%400==0)
cout << "The entered year is a leap year\n";
else
cout << "The entered year is not a leap year\n";
}
else 
cout << "The entered year is not a leap year \n";
}
else
cout << "The entered year is not a leap year\n";
}


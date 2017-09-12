#include <iostream>
using namespace std;
int main()
{
int a;
cout << "Enter a number \n";
cin >> a;
if(a%5==0)
{
if(a%11==0)
cout << "The number is divisible by both 5 and 11 \n";
else
cout << "The number is divisible by 5 but not by 11 \n";
}
else if (a%11==0)
cout << "The number is divisible by 11 but not by 5 \n";
else
cout << "The number is neither divisible by 5 nor by 11 \n";
}



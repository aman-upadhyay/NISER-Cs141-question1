#include <iostream>
using namespace std;
int main()
{
char ch;
cout <<"Enter an alphabet\n";
cin >>ch;
if(ch>=65 && ch<=90)
cout<<"It is uppercase\n";
else if(ch>=97 && ch<=122)
cout<<"It is lowercase\n";
else
{
cout<<"It is not an alphabet\n";
cout<<"Please input an alphabet\n";
}
}


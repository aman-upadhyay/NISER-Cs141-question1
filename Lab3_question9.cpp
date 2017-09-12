#include <iostream>
using namespace std;
int main()
{
char ch;
cout <<"Enter a character\n";
cin >>ch;
if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
cout<<"It is an alphabet";
else if(ch>=48 && ch<=57)
cout<<"It is a digit";
else
cout<<"It is a special character";
}


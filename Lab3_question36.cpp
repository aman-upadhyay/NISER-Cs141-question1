#include <iostream>
using namespace std;
int main()
{
int x,b,s=1;
cout<<"Enter a number to find the products of all its digits\n";
cin>>x;
b=1;
while(x>0){
     b=x%10;
     x=x/10;
     s=b*s;     
} cout<<"Product of all Digit is "<<s;
}

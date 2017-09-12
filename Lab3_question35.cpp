#include <iostream>
using namespace std;
int main()
{
int x,b,s;
cout<<"Enter a number to find the sum of all its digits\n";
cin>>x;
while(x>0){
     b=x%10;
     x=x/10;
     s=b+s;     
} cout<<"Sum of all Digit is "<<s;
}

#include <iostream>
using namespace std;

int main()
{
	int n, rn = 0, r,x;
	cout << "Enter an integer: ";
	cin >> n;
	x=n;
	while(n != 0)
	{
		r = n%10;
		rn = rn*10 + r;
		n=n/10;
	}
	if(x==rn)
		cout<<"The Number entered is a palindrome";
        else
		cout<<"The number is not a palindrome";
}

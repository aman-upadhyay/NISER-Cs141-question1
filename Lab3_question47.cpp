#include <iostream>
using namespace std;
int main()
{  int i,c,n;
  cout<<"Enter a number to check its prime or not";
  cin>>n;
 if (n<=1)
     { cout<<"no is not prime\n";
      }
        else {
           for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
  	cout<<n<<" is a Prime number\n";
  }
  else {
 	 cout<<n<<" is not a Prime number\n";
  }  
}
}

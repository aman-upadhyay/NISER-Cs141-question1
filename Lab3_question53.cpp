#include <iostream>
using namespace std;
int main()
{
 int i,n,s=0,rem;
 cout << "Enter a number\n";
 cin >> n;
 for(i=1;i<n;i++) 
 {
  rem=n%i;
  if(rem==0)
  {
   s=s+i;
  }
 }
 if(s==n)
 cout << "The entered number is a perfect number\n";
 else
 cout << "The entered number is not a perfect number\n";
}


#include <iostream>
#include <cmath>
using namespace std;
int armstrong(int n)
{
int i,q,n1,rem,r=0,s;
q=n;
n1=n;
while(q>=1)
{
q=q/10;
r=r+1;
}
s=0;
for(i=1;i<=r;i++)
{
rem=n1%10;
n1=n1/10;
s=s+pow(rem,r);
}
if(s==n)
cout<<n<<" is a Armstrong number\n";
else
cout<<n<<" is not a Armstrong number\n";
}





int perfect(int n)
{
 int i,s=0,rem;
 for(i=1;i<n;i++) 
 {
  rem=n%i;
  if(rem==0)
  {
   s=s+i;
  }
 }
 if(s==n)
 cout << n<<" number is a perfect number\n";
 else
 cout << n<<" number is not a perfect number\n";
}

int prime(int n)
{  int i,c;
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
int main()
{ int n;
  cout<<"Enter a no to check if it is Strong Prime Or armstrong";
 cin>>n;
   armstrong(n);
   prime(n);
   perfect(n);
}

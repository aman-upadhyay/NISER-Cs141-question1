#include <iostream>
using namespace std;
int n,s=0;
int fib(int n)
{if(n==1||n==2)
{
return 1;
} 
 else
{
 s=fib(n-2)+fib(n-1);
 return s;
}
}
int main()
{
cout<<"Enter n to find nth term of fibbonacci series\n";
cin>>n;
cout<<fib(n);
}  

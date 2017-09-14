#include <iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter a number\n";
 cin>>n;
 cout<<"All the factors of the number\n";
 for(int i=1;i<=n;i++)
 {
  if(n%i==0)
  cout<<i<<"\n";
 }
}

 

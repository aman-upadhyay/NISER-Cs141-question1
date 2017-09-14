#include <iostream>
using namespace std;
int prime(int s,int n)
{
 int r=0;
 cout<<"The prime numbers between "<<s<<" to "<<n<<" are-\n";
 for(int i=s;i<=n;i++)
 {
  for(int j=1;j<=i;j++)
  {
   if(i%j==0)
   r++;
  }
  if(r==2)
  cout<<i<<"\n";
  r=0;
 }
} 
int main()
{ 
 int s1,e1;
 cout<<"Enter the start of the interval\n";
 cin>>s1;
 cout<<"Enter the end of the interval\n";
 cin>>e1;
 prime(s1,e1);
}


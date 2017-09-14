#include<iostream>
using namespace std;
int perfect(int s,int n)
{
 int sum = 0;
 for(int i=s;i<=n;i++)
 {
  for(int j=1;j<i;j++) 
  {
   if(i%j==0)
   sum=sum+j;
  }
  if(sum==i)
  cout<<i<<endl; 
  sum=0;
 }
}
int main()
{
 int s1,n1;
 cout<<"Enter the start of the interval\n";
 cin>>s1;
 cout<<"Enter the end of the interval\n";
 cin>>n1;
 perfect(s1,n1);
 return 0;
}



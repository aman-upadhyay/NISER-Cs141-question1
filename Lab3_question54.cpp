#include<iostream>
using namespace std;
int main()
{
 int num;
 int sum = 0;
 cout<<"Find all the perfect numbers up to number: ";
 cin>>num;
 for(int i=1;i<=num;i++)
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
 return 0;
}



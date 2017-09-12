#include <iostream>
using namespace std;
int main()
{
 int n,t3;
 cout<<"Enter the number of terms\n";
 cin>>n;
 int t1=0,t2=1;
 cout<<t1<<","<<t2;
 for(int i=3;i<=n;i++)
 {
  t3=t1+t2;
  cout<<","<<t3;
  t1=t2;
  t2=t3;
 }
}


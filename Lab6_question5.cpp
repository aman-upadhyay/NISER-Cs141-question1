#include <iostream>
using namespace std;
int main()
{
 int n;
 char *p;
 cout<<"Enter the length of the string that you want to enter\n";
 cin>>n;
 char str[n+1];
 cout<<"Enter the string\n";
 cin>>str;
 p=str;
 for(int i=0;i<n;i++)
 {
  cout<<p<<"\n";
  p++;
 }
}

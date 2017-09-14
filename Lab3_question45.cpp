#include <iostream>
using namespace std;
int main()
{
 int n1, n2, max,hcf;
 cout<<"Enter two numbers: ";
 cin>>n1>>n2;
 if(n1>n2)
 max=n1;
 else
 max=n2;
 do
 {
  if(max%n1==0 && max%n2==0)
  {
 hcf=(n1*n2)/max;
 cout<<"HCF is:"<<hcf<<"\n";
   break;
  }
  else
  max++;
 }while(true);                                
return 0;
}

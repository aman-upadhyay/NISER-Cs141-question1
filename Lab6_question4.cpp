#include <iostream>
using namespace std;
int main()
{
 char str[4]="Aman",*cp=str;
 cout<<"Printing using normal index method\n";
 for(int i=0;i<4;i++)
 {
  cout<<str[i];
 }
 cout<<"\nPrinting using pointers\n";
 for(int i=0;i<4;i++)
 {
  cout<<*(cp+i);
 }
}
  

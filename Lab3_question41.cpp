#include<iostream>
using namespace std;

  int main ()
  {
      char a;
     int i;
    a=0;
      while(i<127)
      { 
        a=i;
        cout<<"For ASCII "<<a<<" has its value in "<<i<<"\n";
        i++; 
      }
     return 0;
  }

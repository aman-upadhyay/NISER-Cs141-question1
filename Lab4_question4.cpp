#include<iostream>
using namespace std;
  
     int even_odd (int a)
       {
          if (a%2==0)
             cout<<"The number is even";
          else 
             cout<<"The number is odd";
        }
      int main ()
       { int a;
            cout<<"Enter a number to check even odd";
            cin>>a;
            even_odd(a);
}

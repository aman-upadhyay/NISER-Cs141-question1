#include<iostream>
using namespace std;
  
     int even_odd (int a)
       {
          float b,c;
         c = (b/2)-(a/2);
          if (c==0)
             cout<<"no is even";
          else 
             cout<<"no is odd";
        }
      int main ()
       { int a;
            cout<<"Enter a no to check even odd";
            cin>>a;
            even_odd(a);
}

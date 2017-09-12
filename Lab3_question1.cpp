#include <iostream>
using namespace std;
int main()
 {
   int a,b;
   cout << "Enter two numbers"<<"\n";
   cin >> a;
   cin >> b;
   if(a > b){
     cout << "The maximum of the two numbers is "<<a<<"\n";
   }
   else if (b > a){
     cout << "The maximum of the two numbers is "<<b<<"\n";
   } 
   else{
     cout << "You have entered the same number";
   }
 }



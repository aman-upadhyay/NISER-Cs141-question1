#include<iostream>
using namespace std;

int main ()
   {  

    int d,w,m,y;
    int a,b,c;
    cout<< "Enter Days here";
    cin>>d;
    y = d/365;
    a = d%365;
    m = a/30;
    b = a%30;
    w = b/7;
    c = b%7;
    cout<<d<<" days is "<<y<<" years "<<m<<" months "<<w<<" weeeks and "<<c<<" days. ";

        return 0;
   } 


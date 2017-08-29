#include<iostream>
using namespace std;

int main ()
   {  

    int a,b,c,d,e,f;
    float g,h;
    cout<< "Enter marks of First paper here out of 100 :";
    cin>>a;
    cout<< "Enter marks of Second paper here out of 100 :";
    cin>>b;
    cout<< "Enter marks of Third paper here out of 100 :";
    cin>>c;
    cout<< "Enter marks of Fourth paper here out of 100 :";
    cin>>d;
    cout<< "Enter marks of fifth paper here out of 100 :";
    cin>>e;

    f = a+b+c+d+e;
    g = f/5;
    h = (f/500)*100;
    cout<<"your Total marks is "<<f<<"\n";
    cout<<"your average marks is "<<g<<"\n";
    cout<<"yoyur percentage is "<<h;
        return 0;
   } 


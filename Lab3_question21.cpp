#include <iostream>
using namespace std;
int main()
 {
   double u,bi,bf;
   cout<<"Enter units consumed\n";
   cin>>u;
   if (u<=50)
    bi = u*0.5;
   else  if(u<=150)
    bi = 25+(u-50)*0.75;
   else if(u<=250)
    bi = 25+75+(u-150)*1.2;
   else bi = 25+75+120+(u-250)*1.5;
   bf = bi*1.2;
   cout<<"Your bill is "<<bf;
}

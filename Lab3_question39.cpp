#include<iostream>
using namespace std;

int main()  //not working with large numbers fine with small numbers
{
	long long a;
	int x,n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
	cout<<"Enter a number to check frequenty of digit\n";
	cin>>a;

	while(a>0)
	{
		x=a%10;
		a=a/10;
		if(x==0)
			n0=n0+1;
		else if(x==1)
			n1=n1+1;
		else if(x==2)
			n2=n2+1;
		else if(x==3)
			n3=n3+1;
		else if(x==4)
			n4=n4+1;
                else if(x==5)
                        n5=n5+1;
                else if(x==6)
			n6=n6+1;
		else if(x==7)
			n7=n7+1;
		else if(x==8)
			n8=n8+1;
		else if(x==9)
			n9=n9+1;
	}
		cout<<"Frequency of zero is "<<n0<<"\n";
		cout<<"frequency of one is "<<n1<<"\n";
		cout<<"Frequency of two is "<<n2<<"\n";
		cout<<"frequency of Three is "<<n3<<"\n";
		cout<<"Frequency of four is "<<n4<<"\n";
		cout<<"frequency of five is "<<n5<<"\n";
		cout<<"frequency of six is "<<n6<<"\n";
		cout<<"Frequency of seven is "<<n7<<"\n";
		cout<<"frequency of eight is "<<n8<<"\n";
		cout<<"frequency of nine is "<<n9<<"\n";
}

#include<iostream>
using namespace std;
void Add(int a,int b,int c);
void Sub(int a,int b,int c);
void Mul(int a,int b,int c);

int main()
{
	Add(1,12,3);
	Sub(40,15,14);
	Mul(1,12,3);
}
void Add(int a,int b,int c)
{
   int v1=a;
   int v2=b;
   int v3=c;
   cout<<v1+v2+v3<<endl;
}
void Sub(int a,int b,int c)
{
	int v1=a;
	int v2=b;
	int v3=c;
	cout<<v1-v2-v3<<endl;
}
void Mul(int a,int b,int c)
{
	int v1=a;
	int v2=b;
	int v3=c;
	cout<<v1*v2*v3;
}



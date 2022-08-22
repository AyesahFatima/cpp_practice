#include<iostream>
using namespace std;

int Add(int number1,int number2);
int Sub(int number3,int number4);
int Div(int number5,int number6);

int main()
{
	int number1=Add(15,5);
	int number2=(5);
	cout<<number1+number2<<endl;
	
	int number3=Sub(15,5);
	int number4=5;
	cout<<number3-number4<<endl;
	
	int number5=Div(15,5);
	int number6=3;
	cout<<number5/number6<<endl;
}

int Add(int number1,int number2)
{
	int a;
	int b;
	a=number1;
	b=number2;
	return a+b;
}

int Sub(int number3,int number4)
{
	int a;
	int b;
	a=number3;
	b=number4;
	return a-b;
}

int Div(int number5,int number6)
{
	int a;
	int b;
	a=number5;
	b=number6;
	return a/b;
}

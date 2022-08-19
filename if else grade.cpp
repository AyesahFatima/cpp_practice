#include<iostream>
using namespace std;
int main()
{
	int value1=100;
	int value2=85;
	int value3=75;
	int value4=65;
	
	cout<<"enter value1";
	cin>>value1;
	cout<<"enter value2";
	cin>>value2;
	cout<<"enter value3";
	cin>>value3;
	cout<<"enter value4";
	cin>>value4;
	
	if(value1>value2)
	{
		cout<<"Grade A"<<endl;
	}
	if(value2<value1)
	{
		cout<<"Grade B"<<endl;
	}
	if(value3<value2)
	{
		cout<<"Grade C"<<endl;
	}
	else(value4<value3);
    {
	   cout<<" Fail"<<endl;
    } 
}

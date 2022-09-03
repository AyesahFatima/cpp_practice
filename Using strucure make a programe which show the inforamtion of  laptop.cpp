#include<iostream>
using namespace std;
struct Device
{
	string Company;
	string Model;
	int Window;
	int Generation;
	int RAM;
};

int main()

{
    Device laptop;
	
	laptop.Window=10;
	laptop.Generation=7;
	laptop.RAM=4;
	laptop.Company = "Dell";
	laptop.Model = "E5220";
	
	cout<<laptop.Window<<endl;
	cout<<laptop.Generation<<endl;
	cout<<laptop.RAM<<endl;
	cout<<laptop.Company<<endl;
	cout<<laptop.Model;

}

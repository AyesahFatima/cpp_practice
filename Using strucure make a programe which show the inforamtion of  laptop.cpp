#include<iostream>
using namespace std;
struct Device
{
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
	
	cout<<laptop.Window<<endl;
	cout<<laptop.Generation<<endl;
	cout<<laptop.RAM;

}

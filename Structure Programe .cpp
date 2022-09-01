#include<iostream>
using namespace std;
struct Area
{
	int Length;
	int width;
	
};

int main()
{
	Area BuildingOne,BuildingTwo;
	
	BuildingOne.Length=300;
	BuildingOne.width=195;
	
	BuildingTwo.Length=500;
	BuildingTwo.width=200;
	
	cout<<BuildingOne.Length<<endl;
	cout<<BuildingOne.width;
}

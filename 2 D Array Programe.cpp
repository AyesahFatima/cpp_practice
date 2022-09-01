#include<iostream>
using namespace std;
int main()
{
	int ROW = 4;
	int COULMN = 4;
	int b[ROW] [COULMN];
	
	b[0][0]=12;
	b[0][1]=10;
	b[0][2]=15;
	b[0][3]=25;
	
	b[1][0]=32;
	b[1][1]=33;
	b[1][2]=45;
	b[1][3]=16;
	
	b[2][0]=4;
	b[2][1]=17;
	b[2][2]=13;
	b[2][3]=28;
	
	b[3][0]=34;
	b[3][1]=19;
	b[3][2]=45;
	b[3][3]=84;
	
	for(int i = 0 ; i < 4 ; i ++)
	{
		for(int j = 0 ; j < 4 ; j ++)
		{
	      cout<<" ("<<i<<","<<j<<") "<<b[i][j]<<"\t";
		}
		cout<<endl;
	}	
}

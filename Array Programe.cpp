#include<iostream>
using namespace std;
int main()
{
   int ROW=2;
   int COULMN=2;
   int c[ROW][COULMN];
   
   c[0][0]=1;
   c[0][1]=2;
   
   c[1][0]=3;
   c[1][1]=4;
   
for(int p=0; p<2; p++)
{
	
	for(int q=0; q<2; q++)
	{
		cout<<" ("<<p<<","<<q<<") "<<c[p][q]<<"\t";
	}
	cout<<endl;
}

}

#include<iostream>
using namespace std;
int main()
{
  char ch;
  int t;
  do
  {
   cout<<"enter table value";
   cin>>t;
   for(int a=1;a<=10;a++)
     cout<<t<<"x"<<a<<"="<<t*a<<endl;
     cout<<"Continue";
  }
  while(ch=='Y'||ch=='y');
  cout<<"\n Thanks for using programe";

}

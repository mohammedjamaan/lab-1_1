#include <iostream>
using namespace std;

int main()
{
	
	int x;
	int *pt;
	x=5;
	pt=&x;
	cout<<"address of x ="<<&x<<endl;
    cout<<"value of pt ="<<*pt<<endl;
	(pt)++;
	cout<<"NEW memory address is :"<<pt<<endl;
	cout<<"NEW value of pt :"<<*pt<<endl;
		
	return 0;
	
}

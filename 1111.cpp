#include <iostream>
#include <math.h>

using namespace std;

void trig_func()
{
	double x;
	cout<<"enter the angle  :";
	cin>>x;
    cout<<"sin "<<sin(x*M_PI/180)<<endl;
    
    cout<<"cos "<<cos(x*M_PI/180)<<endl;       
}

int main()
{
	trig_func();
	
	 return 0;
}

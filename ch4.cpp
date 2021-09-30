#include "std_lib_facilities.h"


int main()
{
cout<<"Enter a value"<<endl;
char value;
double value2;
double m = 1;
double cm = 100;
double in = 1;
double ft = 1;
int number=0;
int szum=0;
int i;

vector<double> values;


while(value !='|')
{
	cin>>value;
	if(value > value+1 )
	{
		cout<<value<<"largest so far"<<endl;
	}
	else
	{
		cout<<value<<"smallest so far"<<endl;
	}
	number++;
	value += szum;
	
	cout<<number<<"."<<"number";
	
	
	
}

values.push_back(value);
cout<<values<<endl;

if(value > value2)
	cout<<value<<">"<<value2<<endl;
else 
	(cout<<value2<<">"<<value<<endl);
	
	
if(value = value2)
	cout<<value<<"="<<value2<<endl;

if(value >1.0/100> value2)
	cout<<sort.value<<"="<<value2<<endl;



return 0;
}

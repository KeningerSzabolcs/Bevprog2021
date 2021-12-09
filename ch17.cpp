#include "std_lib_facilities.h"

void print_array10(ostream& os,int*a)
{
	for(int i=0;i<10;i++)
	{
		os<<a[i]<<endl;
	}	
}

void print_array(ostream& os, int*a,int n)
{

	for(int i=0;i<n;i++)
	{
		os<<a[i]<<endl;
	}	

}
void print_vector(ostream&os ,vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		os<<v[i]<<endl;
	}
}



int main()
{

	int*b1 = new int[10];
	int i;
	for(i=0;i<10;i++)
	{
		cout<<b1[i]<<endl;
	}	

	delete[] b1;


	int*b2 = new int[10];
	for(i=0;i<10;i++)
	{
		b2[i] = 100+i;
	}

	print_array10(cout,b2);

	delete[] b2;

	int*b3 = new int[11];
	for(i=0;i<11;i++)
	{
		b3[i] = 100+i;
	}

	print_array10(cout,b3);

	delete[] b3;



	int*b4 = new int[20];
	for(i=0;i<20;i++)
	{
		b4[i] = 100+i;
	}

	print_array(cout,b4,20);

	delete[] b4;

	vector<int> v_1;
	for(i=0;i<10;i++)
	{
		v_1.push_back(100+i);
	}
	print_vector(cout,v_1);

	
	vector<int> v_2;
	for(i=0;i<11;i++)
	{
		v_2.push_back(100+i);
	}
	print_vector(cout,v_2);


	vector<int> v_3;
	for(i=0;i<20;i++)
	{
		v_3.push_back(100+i);
	}
	print_vector(cout,v_3);


	int a_1 = 7;
	int *p1 = &a_1;

	cout<<"p1: "<<p1<<endl;
	cout<<"*p1: "<<*p1<<endl;

	

	int*a_2 = new int [7]{1,2,4,8,10,12,14};
	int*p2 = &*a_2;

	cout<<"p2: "<<p2<<endl;
	print_array(cout,p2,7);

	
	
	int*p3 = p2;

	p1 = p2;
	p3 = p2; 

	cout<<"p1: "<<p1<<endl;
	cout<<"*p1: "<<*p1<<endl;

	cout<<"p2: "<<p2<<endl;
	cout<<"*p2: "<<*p2<<endl;

	delete[] p2;

	int*a_3 = new int[10]{1,2,4,8,10,12,14,16,18,20};
	p1 = &*a_3;

	int *a_4 = new int[10];
	p2=&*a_4;

	for(i=0;i<10;i++)
	{
		p2[i] = p1[i];
	}

	vector<int> v1;
	for (i=0;i<10;i++)
	{
		v1.push_back(0+i);
	}

	vector<int> v2;
	for (i=0;i<10;i++)
	{
		v2.push_back(v1[i]);
	}
	print_vector(cout,v2);

	


	return 0;
}	
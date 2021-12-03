#include "std_lib_facilities.h"

template<typename T>
struct S
{
	S() {}

	S(T t):val(t){}
	
	
	S& operator=(const T& newValue) { val = newValue; return *this; }
	

	void set(T t) {val = t;}
	const T& get() const {return val;}

	T& getRef() {return val;}

private:
	T val;
};

template<typename T>
const T& get(S<T>& s)
{
	return s.get();
}

template<typename T>
void read_val(T& v)
{
	cin>>v;
}


int main()
{
	S<int> si(55);

	cout<< si.get() <<endl;

	S<char> sc('L');

	cout<< sc.get() <<endl;

	S<double> sd(3.14);

	cout<< sd.get() <<endl;

	S<string> ss("Value");

	cout<< ss.get() <<endl;


	S<vector<int>> sv(vector<int>(10,100));
	for(int i : sv.get())
		cout << i << ", ";

	cout << endl;





	return 0;
}
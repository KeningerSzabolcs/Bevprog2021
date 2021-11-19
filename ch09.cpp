#include "std_lib_facilities.h"

class Year
{
int min 0;
public:
int y;
Year((int x):int{x}{if (x<min)})error("invalid year");
int year()
{return y;}
};

enum class Month
{
	months = jan,feb,march,apr,may,jun,jul,aug,sep,oct,nov,dec;

};
class Date
{
private:
	Year y;
	Month m;
	int d;
public:
	Date(Year y,Month m,int d) : y(y), m(m),d(d){};
	Year year(){return Year{y}};
	Month month(){return Month{m}};
	int day(){return d};
	void add_day(int n)
	{
		d+= n;
	}
	int main()
	{
		Date today{Year{1978}, Month::jun,25};
		Date tomorrow = today;

		tomorrow.add_day(1);
		cout<<"Year: "<<today.year()<<"Month: "<<today.month()<<"Day: "<<today.day()<<endl;
		cout << "Year: " << tomorrow.year() << " Month: " << tomorrow.month() << " Day: " << tomorrow.day() <<endl;
	
		return 0;
	}

}
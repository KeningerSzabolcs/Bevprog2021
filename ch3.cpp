#include "std_lib_facilities.h"


int main()
{
cout<<"Enter your first name!"<<endl;

string first_name;

cin>>first_name;

cout<<"Hello,"<<first_name<<endl;

cout<<"Enter the name of the person you want write to!"<<endl;

string person;

cin>>person;

cout<<"Dear,"<<person<<endl; 

string line="how are you?";

string line_2="I hope you doing fine.";

cout<<line<<endl;

cout<<line_2<<endl;

string friend_name;

cout<<"Please name one of your other friend!"<<endl;

cin>>friend_name;

cout<<"Have you seen "<<friend_name<<" lately?"<<endl;

char friend_sex = 0;

cout<<"Type in your friend's sex, if your friend is a male please type in m otherwise type in f."<<endl;

cin>>friend_sex;

if(friend_sex=='m')
{
	cout<<"If you see "<<friend_name<<" ask him to call me."<<endl;	
}

else if(friend_sex=='f')
{
	cout<<"If you see "<<friend_name<<" ask her to call me."<<endl;
}

int age=0;

cout<<"How old are you?"<<endl;

cin>>age;

if(age<=0 || age>110)
{
	simple_error("you're kidding!");
} 

cout<<"I heard you just had a birthday and your are "<<age<<" years old."<<endl;

if(age<12)
cout<<"Next your you will be "<<age+1<<"."<<endl;

else if(age=17)
cout<<"Next year you will be able to vote."<<endl;

else if(age>70)
cout<<"Enjoy your retirement."<<endl;

cout<<"Yours sincerely  Szabolcs Keninger!"<<endl;
return 0;
}

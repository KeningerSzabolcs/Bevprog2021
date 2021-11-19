#include "std_lib_facilities.h"

int main()
{
int birth_year=2001;
cout << "Birth year:" << endl
        << birth_year<< "\t(decimal)" << endl
        << hex << birth_year << "\t(hexadecimal)" << endl
        << oct << birth_year << "\t(octal)" << endl;
int age =20;
cout <<dec<< "Age: " << endl
        << age<< "\t(decimal)" << endl
        << hex << age << "\t(hexadecimal)" << endl
        << oct << age << "\t(octal)" << endl;

int a,b,c,d;
cin >> a >>oct >> b >> hex >> c >> d;
cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;
cout << 1234567.89 << "\t(normal form)\n" << fixed << 1234567.89 << "\t(fixed)\n" << scientific << 1234567.89 << "\t(scientific)\n" << endl;

cout << "\t" << "Keniniger" << "  " << "Szabolcs" << "  "
        << "\t" << "06302822833" << "  " << "\t" << "Keniniger.Szabolcs@gmail.com" << endl
        
        << "\t" << "Kiss" << "  " << "\t" << "József" << "  "
        << "\t" << "06704852819" << "  " << "\t" << "kissj@gmail.com" << endl
        
        << "\t" << "Horvat" << "  " << "\t" << "Janos" << "  "
        << "06702621703" << "  " << "\t" << "janos.horvat@gmail.com" << endl
        
        << "\t" << "Szalai" << "  " << "\t" << "Adam" << "  "
        << "06208138147" << "  " << "\t" << "szalai9@gmail.com" << endl
        
        << "\t" << "Nagy" << "  " << "\t" << "Akos" << "  "
        << "06308821311" << "  " << "\t" << "akos2003@gmai.com" << endl
        
        << "\t"<<"Kerulo" << "  " << "Laszlo" << "  "
        << "06709213131" << "  " << "k.laci@gmail.com" << endl;

return 0;
}
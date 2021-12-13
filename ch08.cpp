//int x = 7;
 //int y =9;
 //swap_v(x,y); 
 //swap_v(7,9);
 //const int cx = 7;
 //const int cy = 9;
 //swap_cr(cx,cy);
 //swap_cr(7.7,9.9);
 //double dx = 7.7;
// double dy = 9.9;
// swap_r(dx,dy);
//swap_r(7.7,9.9);

#include "std_lib_facilities.h"
int main()
 {
    int X;
 X::var = 7;
 X::print(); // print X’s var
 using namespace Y;
 var = 9;
 print(); // print Y’s var
 { using Z::var;
 using Z::print;
 var = 11;
 print(); // print Z’s var
 }
 print(); // print Y’s var
 X::print(); // print X’s var
 }
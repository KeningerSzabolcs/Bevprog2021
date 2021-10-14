#include "std_lib_facilities.h"
 int main()
 try {
 cout << "Success!\n";
 cout << "Success!\n";
 cout << "Success!\n";
 cout << "success! \n";
 int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
 vector<int> v2(10); v[5] = 7; if (v[5]!=7); cout << "Success!\n";
 if (bool cond=1) cout << "Success!\n"; else cout << "Fail!\n";
 bool c = false; if (c=1) cout << "Success!\n"; else cout << "Fail!\n";
 string s = "ape"; bool c2 = "fool"<s; if (c2) cout << "Success!\n";
 string s2 = "ape"; if (s2=="fool") cout << "Success!\n";
 string s3 = "ape"; if (s3=="fool") cout << "Success!\n";
 vector<char> v3(5); for (int i=0; i<v3.size(); ++i) ; cout << "Success!\n";
 vector<char> v4(5); for (int i=0; i<=v4.size(); ++i) ; cout << "Success!\n";
 string s4 = "Success!\n"; for (int i=0; i<6; ++i) cout << s4[i]<<'\n';
 if (true) cout << "Success!\n"; else cout << "Fail!\n";
 int x = 2000; int c3 = x; if (c3==2000) cout << "Success!\n";
 string s5 = "Success!"; for (int i=0; i<=s5.size(); ++i) cout << s5[i]<<endl;
 vector<int> v5(5); for (int i=0; i<=v5.size(); ++i) ; cout << "Success!\n";
 int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
 //int x2 = 2; double d = 5/(x2-2); if (d==2*x2+0.5) cout << "Success!\n";
 //vector<char> s6 = "Success!\n"; for (int i=0; i<=10; ++i) cout << s6[i];
 i=0;j=0; while (i<10) ++i; if (j<i) cout << "Success!\n";
 x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";
 cout <<"Success!\n";
 keep_window_open();
 return 0;
 }
 catch (exception& e) {
 cerr << "error: " << e.what() << '\n';
 keep_window_open();
 return 1;
 }
 catch (...) {
 cerr << "Oops: unknown exception!\n";
 keep_window_open();
 return 2;
 }

#include "std_lib_facilities.h"

int main()
{
cout<<"Please enter 7 pairs of x,y points"<<endl;
int x;
int y;
int i;
vector<int>original_points;
for(i=1;i<=7;i++)
{
    cin>>x>>y;
    
    
}
original_points.push_back(x);
original_points.push_back(y);
for(i=0;i<original_points.size();++i)
{
    cout<<original_points[i]<<endl;
}


return 0;
}
// include library
#include <iostream>
using namespace std;
int main()
{
 int years,weeks,days;
 cout<<"enter No. of days"<<endl;
 cin>>days;
 years=days/365;
 days=days%365;
 weeks=days/7;
 cout<<"No. of years"<<years<<endl;
 cout<<"No. of weeks"<<weeks<<endl;
 cout<<"No. of days"<<days<<endl;
return 12;
}

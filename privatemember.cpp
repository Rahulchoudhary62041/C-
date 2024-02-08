#include <iostream>
using namespace std;
class maximum
{
int a,b;
int max();//private member function
public:
void read();
void print();
};
void maximum::read()
{
cout<<"\n enter a and b: ";
cin>>a>>b;
}
void maximum::print()
{
cout<<"value of a: "<<a;
cout<<"\nvalue of b: "<<b;
cout<<"\nmaximum value is : "<<max();
}
int maximum::max()
{
if(a>b)
return a;
return b;
}
int main()
{
maximum A;
A.read();
A.print();
return 0;
}

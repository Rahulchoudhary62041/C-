#include<iostream>
using namespace std;
class A{
	public:
		int x=10;
};
class B:public A{
	public:
		int y=20,z;
		void show(){
			cout<<"x = "<<x;
			cout<<endl<<"y = "<<y;
			z=x+y;
			cout<<endl<<"Sum = "<<z;
		}
};
int main(){
	B b;
	b.show();
	return 0;
}

#include<iostream>
using namespace std;
class A{
	public:
		int x;
		void set_A(){
			cout<<"Enter the value of x = ";
			cin>>x;
		}
};
class B{
	public:
		int y;
		void set_B(){
		    cout<<"Enter the value of y = ";
	     	cin>>y;	
		}
};
class C:public A , public B{
	public:
		int z;
		void set_C(){
			cout<<"Enter the value of z = ";
			cin>>z;
		}
		void result(){
			cout<<"Total Sum = "<<x+y+z;
		}
};
int main(){
	C c;
	c.set_A();
	c.set_B();
	c.set_C();
	c.result();
	return 0;
}

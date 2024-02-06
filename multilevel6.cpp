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
class B: public A{
	public:
		int y,w;
		void set_B(){
		    cout<<"Enter the value of y = ";
	     	cin>>y;	
		}
		void sum(){
			w=x+y;
			cout<<"Sum = "<<w<<endl;
		}
};
class C: public B{
	public:
		int z;
		void set_C(){
			cout<<"Enter the value of z = ";
			cin>>z;
		}
		void result(){
			cout<<"Total Product = "<<z*w;
		}
};
int main(){
	C c;
	c.set_A();
	c.set_B();
	
	c.sum();
	c.set_C();
	c.result();
	return 0;
}

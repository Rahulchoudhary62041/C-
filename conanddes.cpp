#include <iostream>
using namespace std;
class MyClass {
public:
    MyClass() {
        cout << "Constructor called!" <<endl;
    }
    ~MyClass() {
        cout << "Destructor called!" <<endl;
    }
    void performAction() {
        cout << "Performing an action..." <<endl;
    }
};
int main(){
    MyClass myObject;
    myObject.performAction();
	return 0;
}


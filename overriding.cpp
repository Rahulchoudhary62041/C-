#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound()  {
        cout << "Animal makes a generic sound." << endl;
    }
};
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks:" <<endl;
    }
};
class Cat : public Animal {
public:
    void makeSound(){
        cout << "Cat Meow! Meow!" <<endl;
    }
};

int main() {
    Animal A;
    Dog d;
    Cat c;
    cout << "Animal: ";
    A.makeSound();
    cout << "Dog: ";
    d.makeSound();
    cout << "Cat: ";
    c.makeSound();
    return 0;
}


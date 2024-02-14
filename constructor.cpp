// Example: defining the constructor within the class
#include <iostream>
using namespace std;

class Student {
public:
  int age;
  string name;

  Student() { // Default constructor//student(int x, string y)
    age = 10;//age=x;
    name = "xyz";//name=y;
  }

int main() {
  Student Std;//std("10", "xyz");

  cout << " age = " << Std.age << endl;
  cout << " name = " << Std.name << endl;

  return 0;
}


//2
#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[50];
	double fee;
	public:
	student()
	{
		cout<<"Enter the RollNo:";
		cin>>rno;
		cout<<"Enter the Name:";
		cin>>name;
		cout<<"Enter the Fee:"; 
		cin>>fee;
	} 
	


	void display()
	{
		cout<<endl<<"Roll no. :- "<<rno<<endl<<"Name :- "<<name<<endl;
		cout<<"Total fee :- "<<fee;
	}
};

int main()
{
	student s; //constructor gets called automatically when we create the object of the class
	s.display();
	return 0;

}


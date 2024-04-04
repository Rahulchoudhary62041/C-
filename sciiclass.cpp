#include<iostream>
using namespace std;
class ascii{
	private:
		char character;
		public:
			void ASCII(char x)
			{
				character=x;
				cout<<"ASCII value of "<<character<<"  is = "<<int(character);
			}
};
int main()
{
	ascii A;
	char x;
	cout<<"Enetr a character : ";
	cin>>x;
	A.ASCII(x);
	return 0;
}

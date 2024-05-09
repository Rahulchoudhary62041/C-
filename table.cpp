#include<iostream>
using namespace std;
class table{
	private:
		int number;
		public:
			void TABLE(int n){
				number=n;
				for(int i=1;i<=10;i++)
				{
					cout<<n<<" * "<<i<<" = "<<n*i<<endl;
				}
			}
};
int main(){
	table T;
	int n;
	cout <<"Enter number = ";
	cin>>n;
	T.TABLE(n);
	return 0;
}

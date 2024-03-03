#include<iostream>
using namespace std;
int main()
{
	int n,temp,i=1,j,rem;
	char hex[50];
	cout<<"Enter Decimal Number : ";
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		rem=temp%16;
		if(rem<10)
		hex[i++]=rem+48;
		else
		hex[i++]=rem+55;
		temp=temp/16;
	}
	for(j=i;j>0;j--)
	{
		cout<<hex[j];
	}
	return 0;
}

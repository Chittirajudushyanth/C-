#include <iostream>
using namespace std;

class deposit
{
	public:int amount;
	deposit()
	{
		amount=50;
	}
	deposit(int a)
	{
		amount=50+a;
	}
	void display()
	{
		cout<<amount;
	}
};
int main()
{
	deposit d1;
	int amt;
	cout<<"\n enter amount to deposit= ";
	cin>>amt;
	cout<<"\n initial ammount= "<<d1.amount;
	deposit d2(amt);
	cout<<"amount after deposit= "<<d2.amount;
	
}

#include <iostream>
#include <string>
using namespace std;

class clsA
{
public:
	int var;
	static int counter;

	clsA()
	{
		counter++;
	}

	void Print()
	{
		cout << "\nvar = " << var << endl;
		cout << "counter = " << counter << endl;
	}

};

int clsA::counter = 0; //static variable initialisation outside the class


class clsBankAccount
{
public:
	string _owner;
	double _balance;
	static double totalMoney;

	clsBankAccount(string owner,double balance)
	{
		_owner = owner;
		_balance = balance;
		totalMoney += balance;
	}

	void Deposit(double Amount)
	{
		_balance += Amount;
		totalMoney += Amount;
	}

	void withdraw(double amount)
	{
		_balance -= amount;
		totalMoney -= amount;
	}

	void Show()
	{
		cout << endl << _owner << " Balance: " << _balance << endl;
		cout << "Total money in bank: " << totalMoney << endl;
	}


};


double clsBankAccount::totalMoney = 0;


int main()
{
	clsA A1, A2, A3;

	A1.var = 10;
	A2.var = 20;
	A3.var = 30;

	A1.Print();
	A2.Print();
	A3.Print();


	A1.counter = 500;

	cout << "\nafter chaning the static member counter in one object:\n";

	A1.Print();
	A2.Print();
	A3.Print();



	clsBankAccount BankAccount1("Ali", 1000);
	clsBankAccount BankAccount2("Sara", 2000);

	BankAccount1.Deposit(500);
	BankAccount2.withdraw(300);

	BankAccount1.Show();
	BankAccount2.Show();

}
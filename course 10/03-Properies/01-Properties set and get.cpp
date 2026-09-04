#include <iostream>
using namespace std;

class clsEmployee
{

private:
	string _FirstName;
	string _LastName;

public:

	//Property Set
	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	//Property Get
	string FirstName()
	{
		return _FirstName;
	}

	//Property Set
	void setLastName(string LastName)
	{
		_LastName = LastName;
	}

	//Property Get
	string LastName()
	{
		return _LastName;
	}
	string FullName()
	{
		return _FirstName + " " + _LastName;
	}
};

class clsBankAccount
{
private:

	string _AccountNumber;
	double _Balance;

public:

	//property set:
	void SetAccountNumber(string AccountNumber)
	{
		if (!AccountNumber.empty())
		{
			_AccountNumber = AccountNumber;
		}
	}

	//property get :
	string GetAccountNumber()
	{
		return _AccountNumber;
	}

	//property set : 
	void SetBalance(double balance)
	{
		if (balance >= 0)
		{
			_Balance = balance;
		}
		else
		{
			cout << "Error : Balance cannot be negative!" << endl;
		}
	}

	//property get :
	double GetBalance()
	{
		return _Balance;
	}

};


int main()
{

	clsEmployee Person1;

	Person1.setFirstName("Mohammed");
	Person1.setLastName("fouad");

	cout << "First Name:" << Person1.FirstName() << endl;
	cout << "Last Name:" << Person1.LastName() << endl;
	cout << "Full Name:" << Person1.FullName() << endl;


	cout << endl;

	clsBankAccount Account1;

	Account1.SetAccountNumber("SA12345678");
	Account1.SetBalance(1559.39);

	cout << "Account : " << Account1.GetAccountNumber() << endl;
	cout << "Account : " << Account1.GetBalance() << endl;

	system("pause>0");
	return 0;
}
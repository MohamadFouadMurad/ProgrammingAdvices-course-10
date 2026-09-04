#include <iostream>

using namespace std;

class clsPerson
{
private:
	int _ID;
	string _FirstName = "";
	string _LastName = "";
	string _Email = "";
	string _Phone = "";

public:

	clsPerson(int ID,string FirstName,string LastName,string Email , string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}



	int ID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string FirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string LastName()
	{
		return _LastName;
	}


	string FullName()
	{
		return  _FirstName + " " + _LastName;
	}


	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string Email()
	{
		return _Email;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string Phone()
	{
		return _Phone;
	}



	void Print()
	{
		cout << "Info: " << endl;
		cout << "-------------------------------" << endl;
		cout << "ID               :" << _ID << endl;
		cout << "FirstName        :" << _FirstName << endl;
		cout << "LastName         :" << _LastName << endl;
		cout << "FullName         :" << FullName() << endl;
		cout << "Email            :" << _Email << endl;
		cout << "Phone            :" << _Phone << endl;
		cout << "-------------------------------" << endl;
	}


	void SendEmail(string Subject,string Body)
	{
		cout << "\nthe Following message sent successfully to email: " << _Email << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body: " << Body << endl;
	}


	void SendSMS(string TextMessage)
	{
		cout << "\nthe following message sent successfully to phone: " << _Phone << endl;
		cout << TextMessage << endl;
	}

};

int main()
{
	clsPerson Person1(10, "Mohamad", "Murad", "My@gmail.com", "00983877272");
	Person1.Print();

	Person1.SendEmail("Hi", "How Are You?");
	Person1.SendSMS("How Are You?");

	system("Pause>0");
	return 0;
}
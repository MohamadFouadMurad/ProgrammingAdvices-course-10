#pragma once

#include <iostream>
using namespace std;

class clsPerson
{
private:
	int _ID = 10;
	string _FirstName = "";
	string _LastName = "";
	string _Email = "";
	string _Phone = "";

public:

	clsPerson()
	{

	}

	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}


	//read only property
	int ID()
	{
		return _ID;
	}

	//property set
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}


	//property get
	string FirstName()
	{
		return _FirstName;
	}

	//property set
	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	//property get
	string LastName()
	{
		return _LastName;
	}

	//property get
	string FullName()
	{
		return  _FirstName + " " + _LastName;
	}

	//property set
	void SetEmail(string Email)
	{
		_Email = Email;
	}

	//property get
	string Email()
	{
		return _Email;
	}

	//property set
	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	//property get
	string Phone()
	{
		return _Phone;
	}



	void Print()
	{
		cout << "\nInfo: " << endl;
		cout << "-------------------------------" << endl;
		cout << "ID               :" << _ID << endl;
		cout << "FirstName        :" << _FirstName << endl;
		cout << "LastName         :" << _LastName << endl;
		cout << "FullName         :" << FullName() << endl;
		cout << "Email            :" << _Email << endl;
		cout << "Phone            :" << _Phone << endl;
		cout << "-------------------------------" << endl;
	}


	void SendEmail(string Subject, string Body)
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


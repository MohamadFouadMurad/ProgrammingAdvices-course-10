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

class clsEmployee : public clsPerson
{

private:

	string _Title;
	string _Department;
	float _Salary;

public:

	//Property Set
	void SetTitle(string Title)
	{
		_Title = Title;
	}

	//Property Get
	string Title()
	{
		return _Title;
	}

	//Property Set
	void SetDepartment(string Department)
	{
		_Department = Department;
	}

	//Property Get
	string Department()
	{
		return _Department;
	}

	//Property Set
	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	//Property Get
	float Salary()
	{
		return _Salary;
	}

};

int main()
{
	clsEmployee Employee1;

	Employee1.SetFirstName("Mohammed");
	Employee1.SetLastName("fouad");
	Employee1.SetEmail("a@a.com");
	Employee1.SetPhone("99453248529");
	Employee1.Print();
	Employee1.SendEmail("Hi", "How are you?");
	Employee1.SetSalary(5000);

	cout << "\nSalary is: " << Employee1.Salary() << endl;

	system("pause>0");
	return 0;


	/*clsPerson Person1(10, "Mohamad", "Murad", "My@gmail.com", "00983877272");
	Person1.Print();

	Person1.SendEmail("Hi", "How Are You?");
	Person1.SendSMS("How Are You?");

	system("Pause>0");
	return 0;*/
}
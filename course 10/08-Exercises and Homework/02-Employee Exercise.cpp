#include <iostream>

using namespace std;

class clsEmployee
{

private:
	int _ID = 0;
	string _FirstName = "";
	string _LastName = "";
	string _Title = "";
	string _Email = "";
	string _Phone = "";
	float _Salary = 0;
	string _Department = "";

public:

	clsEmployee(int ID, string FirstName, string LastName,string Title, string Email, string Phone , int Salary,string Department)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
		_Department = Department;
	}

	//Read only property
	int ID()
	{
		return _ID;
	}

	//Property set
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	//property get
	string FirstName()
	{
		return _FirstName;
	}

	//Property set
	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	//property get
	string LastName()
	{
		return _LastName;
	}

	//Property set
	void SetTitle(string Title)
	{
		_Title = Title;
	}

	//property get
	string Title()
	{
		return _Title;
	}

	//property get
	string FullName()
	{
		return  _FirstName + " " + _LastName;
	}


	//Property set
	void SetEmail(string Email)
	{
		_Email = Email;
	}

	//property get
	string Email()
	{
		return _Email;
	}

	//Property set
	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	//property get
	string Phone()
	{
		return _Phone;
	}

	//Property set
	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	//property get
	float Salary()
	{
		return _Salary;
	}

	//Property set
	void SetDepartment(string Department)
	{
		_Department = Department;
	}

	//property get
	string Department()
	{
		return _Department;
	}



	void Print()
	{
		cout << "Info: " << endl;
		cout << "-------------------------------" << endl;
		cout << "ID               :" << _ID << endl;
		cout << "FirstName        :" << _FirstName << endl;
		cout << "LastName         :" << _LastName << endl;
		cout << "FullName         :" << FullName() << endl;
		cout << "Title            :" << _Title << endl;
		cout << "Email            :" << _Email << endl;
		cout << "Phone            :" << _Phone << endl;
		cout << "Salary           :" << _Salary << endl;
		cout << "Department       :" << _Department << endl;
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

int main()
{
	clsEmployee Employee1(10, "Mohamad", "Murad","Backend Developer", "My@gmail.com", "00983877272", 5000, "SoftWare Development");
	Employee1.Print();

	Employee1.SendEmail("Hi", "How Are You?");
	Employee1.SendSMS("How Are You?");

	system("Pause>0");
	return 0;
}
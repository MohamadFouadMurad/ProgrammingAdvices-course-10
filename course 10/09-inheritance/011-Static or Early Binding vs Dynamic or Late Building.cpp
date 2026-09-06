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


	clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
		:clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

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


	void Print()
	{
		cout << "\nInfo:";
		cout << "\n___________________";
		cout << "\nID        : " << ID();
		cout << "\nFirstName : " << FirstName();
		cout << "\nLastName  : " << LastName();
		cout << "\nFull Name : " << FullName();
		cout << "\nEmail     : " << Email();
		cout << "\nPhone     : " << Phone();
		cout << "\nTitle     : " << _Title;
		cout << "\nDepartment: " << _Department;
		cout << "\nSalary    : " << _Salary;
		cout << "\n___________________\n";
	}

};

class clsDeveloper : public clsEmployee
{
private:
	string _MainProgrammingLanguage;

public:
	clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary,string MainProgrammingLanguage)
	:clsEmployee(ID,FirstName,LastName,Email,Phone,Title,Department,Salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}


	//property set
	void SetMainProgLanguage(string MainProgLanguage)
	{
		_MainProgrammingLanguage = MainProgLanguage;
	}

	//property get
	string MainProgrammingLanguage()
	{
		return _MainProgrammingLanguage;
	}

	void Print()
	{
		cout << "\nInfo:";
		cout << "\n____________________________________";
		cout << "\nID               : " << ID();
		cout << "\nFirstName        : " << FirstName();
		cout << "\nLastName         : " << LastName();
		cout << "\nFull Name        : " << FullName();
		cout << "\nEmail            : " << Email();
		cout << "\nPhone            : " << Phone();
		cout << "\nTitle            : " << Title();
		cout << "\nDepartment       : " << Department();
		cout << "\nSalary           : " << Salary();
		cout << "\nMainProgLanguage : " << _MainProgrammingLanguage;
		cout << "\n____________________________________\n";
	}

};

int main()
{
	clsDeveloper Developer1(10, "Mohamad", "Murad", "A@a.com", "8298982", "Developer", "ProgrammingAdvices", 5000, "C++");


	Developer1.Print();

	return 0;
}
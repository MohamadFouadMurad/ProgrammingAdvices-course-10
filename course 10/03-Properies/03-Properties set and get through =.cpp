#include <iostream>
using namespace std;

class clsEmployee
{

private:

    int _ID = 101;
    string _Name;
    double _Salary;
    string _Password;

public:

    void SetName(string Name)
    {
        _Name = Name;
    }

    string GetName()
    {
        return _Name;
    }

    __declspec(property(get = GetName, put = SetName)) string Name;


    void SetSalary(double Salary)
    {
        if (Salary >= 3000)
            _Salary = Salary;
    }

    double GetSalary()
    {
        return _Salary;
    }

    __declspec(property(get = GetSalary, put = SetSalary)) double Salary;


    int GetID()
    {
        return _ID;
    }

    __declspec(property(get = GetID)) int ID;

    void SetPassword(string Password)
    {
        _Password = Password;
    }

    __declspec(property(put = SetPassword)) string Password;
};

class clsPerson
{
private:
	string _FirstName;

public:

	void SetFirstName(string FirstName) 
	{
		_FirstName = FirstName;
	}

	string GetFirstName() 
	{
		return _FirstName;
	}

	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
};

int main()
{
	clsPerson Person1;

	Person1.SetFirstName("Mohammed");
	cout << Person1.GetFirstName() << endl;

	//instead of the above we only write this

	Person1.FirstName = "Mohammed";
	cout << Person1.FirstName;


    cout << endl << endl;


    clsEmployee employee1;

    employee1.Name = "Mohamad";
    employee1.Salary = 5000;
    employee1.Password = "secret@123";

    cout << "ID: " << employee1.ID << endl;
    cout << "Name: " << employee1.Name << endl;
    cout << "Salary: " << employee1.Salary << endl;
   

	system("pause>0");
	return 0;
};
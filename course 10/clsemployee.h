#pragma once
#include <iostream>
#include "clsperson.h"

using namespace std;

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


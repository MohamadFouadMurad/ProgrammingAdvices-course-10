#include <iostream>

using namespace std;

class  clsAddress
{
private:
	string _AddressLine1;
	string _AddressLine2;
	string _POPBox;
	string _ZipCode;

public:

	clsAddress(string AddressLine1, string AddressLine2, string POPBox, string ZipCode)
	{
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_POPBox = POPBox;
		_ZipCode = ZipCode;
	}

	//Copy Constructors 
	clsAddress(clsAddress& Old_obj)
	{
		_AddressLine1 = Old_obj.AddressLine1();
		_AddressLine2 = Old_obj.AddressLine2();
		_POPBox = Old_obj.POPBox();
		_ZipCode = Old_obj.ZipCode();
	}

	void SetAddressLine1(string AddressLine1)
	{
		_AddressLine1 = AddressLine1;
	}

	string AddressLine1()
	{
		return _AddressLine1;
	}

	void SetAddressLine2(string AddressLine2)
	{
		_AddressLine2 = AddressLine2;
	}

	string AddressLine2()
	{
		return _AddressLine2;
	}

	void SetPOBox(string POBox)
	{
		_POPBox = POBox;
	}

	string POPBox()
	{
		return _POPBox;
	}

	void SetZipCode(string ZipCode)
	{
		_ZipCode = ZipCode;
	}

	string ZipCode()
	{
		return _ZipCode;
	}

	void Print()
	{
		cout << "\nAddress Details:\n";
		cout << "------------------------" << endl;
		cout << "AddressLine1  : " << _AddressLine1 << endl;
		cout << "AddressLine2  : " << _AddressLine2 << endl;
		cout << "POBox         : " << _POPBox << endl;
		cout << "ZipCode       : " << _ZipCode << endl;
	}

};


int main()
{
	clsAddress Address1("Prince mohamad bin salman", "B 303", "11234", "5555");

	Address1.Print();

	clsAddress Address2 = Address1;

	Address2.Print();

	system("pause>0");
	return 0;

}
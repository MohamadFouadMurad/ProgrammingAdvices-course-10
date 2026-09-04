#include <iostream>

using namespace std;

class clsEmployee
{
	public:
		
		string FirstName;
		string LastName;

		string FullName()
		{
			return FirstName + " " + LastName;
		}


};

int main()
{
	clsEmployee Person1;

	Person1.FirstName = "Mohamad fouad";
	Person1.LastName = "Murad";

	cout << Person1.FullName() << endl;
}
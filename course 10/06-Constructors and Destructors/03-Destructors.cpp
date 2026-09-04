#include <iostream>

using namespace std;

class  clsEmployee
{
	string FullName;
public:

	//This is Instructor will be called when object is built.
	clsEmployee()
	{
		FullName = "Mohammed fouad";
		cout << "\nHi, I'm Constructor";
	}

	//This is destructor will be called when object is destroyed.
	~clsEmployee()
	{
		cout << "\nHi, I'm Destructor";
	}
};

void Fun1()
{
	clsEmployee Person1;
	//after exiting from function, person1 will be
	//destroyed and destructor will be called.
}

void Fun2()
{
	clsEmployee* Person2 = new clsEmployee;
	//always use delete whenever you use new, otherwise object will remain in memory
	delete Person2;
}


int main()
{
	Fun1();
	Fun2();

	system("pause>0");
	return 0;

}
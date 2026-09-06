#include <iostream>

using namespace std;


class clsA
{
private:
	//only accessible inside this class, neither derived classes nor outside class.
	int V1;
	int Fun1()
	{
		return 1;
	}

protected:
	//only accessible inside this class and all derived classes,but not outside class
	int V2;
	int Fun2()
	{
		return 2;
	}

public:
	// Accessible inside this class, all derived classes, and outside class
	int V3;
	int Fun3()
	{
		return 3;
	}
};

class clsB : public clsA
{
public:

	int Func4()
	{

		return 4;
	}

};

class clsC : public clsB
{

public:
	int Fun5()
	{
		return 5;
	}
};

int main()
{
	clsA A1;

	cout << A1.Fun3();

	clsB B1;

	cout << B1.Func4();

	clsC C1;

	cout << C1.Fun3();

	return 0;
}
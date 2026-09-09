#include<iostream>
#include<vector>

using namespace std;

class clsA
{
public:

	// dummy constructor
	clsA() {}

	//Parametarized Constructor
	clsA(int value)
	{
		x = value;
	}

	int x;

	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};

//important example
/*
class clsEnemy
{
public:
	string EnemyName = "";
	int Damage = 0;

	clsEnemy() {};

	clsEnemy(string EnemyName, int Damage)
	{
		this->EnemyName = EnemyName;
		this->Damage = Damage;
	}

	void Print()
	{
		cout << "\nEnemy Name:" << EnemyName << " , Damage:" << Damage;
	}

};
*/

int main()
{
	short NumberOfObjects = 5;

	// allocating dynamic array
	// of Size NumberOfObjects using new keyword

	clsA * arrA = new clsA[NumberOfObjects];

	// calling constructor
	// for each index of array

	for (int i = 0; i < NumberOfObjects; i++)
	{
		arrA[i] = clsA(i);
	}

	// printing contents of array
	for (int i = 0; i < NumberOfObjects; i++)
	{
		arrA[i].Print();
	}


	//important example
/*
	short NumberOfEnemy = 3;

	clsEnemy * arrEnemy = new clsEnemy[NumberOfEnemy];

	for (int i = 0; i < NumberOfEnemy; i++)
	{
		arrEnemy[i] = clsEnemy("Zomibe",10);
	}

	for (short i = 0; i < NumberOfEnemy; i++)
	{
		arrEnemy[i].Print();
	}

	delete[] arrEnemy;
*/


	delete[] arrA;

	return 0;
}
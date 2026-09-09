#include <iostream>
#include "../clsperson.h"
#include "../clsemployee.h"

using namespace std;

int main()
{
	clsEmployee Employee1(10, "Mohamad", "Murad", "A@a.com", "8298982", "Developer", "ProgrammingAdvices", 5000);

	Employee1.Print();


	return 0;
}
#include <iostream>

using namespace std;


class clsPerson
{
public:

    string FullName;

    clsPerson(string Name)
    {
        FullName = Name;
    }
};


class clsEmployee : public clsPerson
{
public:

    string Title;

    clsEmployee(string Name, string JobTitle)
    : clsPerson(Name)
    {
        Title = JobTitle;
    }
};


class clsStudent : public clsPerson
{
public:

    string University;

    clsStudent(string Name, string Uni)
    : clsPerson(Name)
    {
        University = Uni;
    }
};


// الدالة تستقبل Person Pointer
void PrintName(clsPerson* Person)
{
    cout << Person->FullName << endl;
}


int main()
{
    clsEmployee Employee1("Mohammed", "CEO");

    clsStudent Student1("Ali", "Mersin University");


    PrintName(&Employee1);

    PrintName(&Student1);


    system("pause>0");
    return 0;
}
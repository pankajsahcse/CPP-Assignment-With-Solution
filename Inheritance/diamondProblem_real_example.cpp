#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person  // to overcome diamond problem, use virtual as Person
{
public:
    void study()
    {
        cout << name << " is studying " << endl;
    }
};

class Employee : virtual public Person
{
public:
    void work()
    {
        cout << name << " is working " << endl;
    }
};

class Teacher : public Student, public Employee
{
public:
    void teach()
    {
        cout << name << " is teaching students " << endl;  /// name is ambiguous, to overcome use virtual while inheriting
        cout<<"Here teacher is taking one common function form super base class, "<<endl;
    }
};

int main()
{
    Teacher ta;

    ta.name = "Pankaj";

    ta.displayName(); // name is available in student class and employee class and also in teacher class , also in super base Person
    ta.study();
    ta.work();
    ta.teach();

    return 0;
}

#include<iostream>

using namespace std;

class Student
{
    int id;
    string name;
public:
    Student(int i, string n)
    {
        cout<<"Parameter Constructor"<<endl;
        id = i;
        name = n;
    }

    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
        cout<<"Copy Constructor"<<endl;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }

    ~Student()
    {
        cout<<" Destructor"<<endl;
    }

};


int main()
{

    Student obj1(101,"Pankaj");
    obj1.display();

    cout<<"Copy Constructor called (Shallow Copy )"<<endl;

    /// Method 1 to call copy Constructor

//    Student obj2(obj1);
//    obj2.display();

    /// Method 2 to call copy Constructor

    Student s2 = obj1;
    s2.display();

    return 0;
}

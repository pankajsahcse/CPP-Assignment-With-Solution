#include <iostream>
using namespace std;

class Person
{
protected:
    int id;
    string name;
    int age;

public:

    Person(int i, string n, int ag)
    {
        id = i;
        name = n;
        age = ag;
    }

    virtual void talk() = 0;

    virtual  void my_identity()
    {
        cout<<"Id " <<id <<endl;
        cout<<"Name " << name <<endl;
        cout<<"Age " << age <<endl;
    }
};

class Doctor :  public Person
{
    string specialization;
    int charges_per_hr;
public :
    Doctor(string sp, int ch, int i, string n, int ag) : Person(i,n,ag)
    {
        specialization = sp;
        charges_per_hr = ch;
    }

    void talk() override
    {
        cout<<"I am a " << specialization << "specialist and my charges is " << charges_per_hr << "per hour" <<endl;
    }

    void my_identity() override
    {
        cout<<"Id " <<id <<endl;
        cout<<"Name " << name <<endl;
        cout<<"Age " << age <<endl;
    }

};

class Teacher :  public Person
{
    string subject;
public :
    Teacher(string sub,  int i, string n, int ag) : Person(i,n,ag)
    {
        subject = sub;
    }

    void talk() override
    {
        cout<<"I am a teahcer of " << subject <<endl;
    }

    void my_identity() override
    {
        cout<<"Id " <<id <<endl;
        cout<<"Name " << name <<endl;
        cout<<"Age " << age <<endl;
    }

};

class Student :  public Person
{
protected:
    string student_type;
public :

    Student(string st,  int i, string n, int ag) : Person(i,n,ag)
    {
        student_type = st;
    }

    void talk()
    {

    }

};

class ScStudent : public Student
{

public:

    ScStudent(string st,  int i, string n, int ag) : Student(st,i,n,ag){}
    void talk()
    {
        cout<<"Name " << name <<endl;
        cout<<"Id " <<id<<endl;
        cout<<"I am type of "<< student_type  <<" Student " <<endl;
        cout<<"Age " << age <<endl;
    }

};

class ArtStudent : public Student
{

public:

    ArtStudent(string st,  int i, string n, int ag) : Student(st,i,n,ag)
    {

    }
    void talk()
    {
        cout<<"Name " << name <<endl;
        cout<<"Id " <<id<<endl;
        cout<<"I am type of "<< student_type  <<" Student " <<endl;
        cout<<"Age " << age <<endl;
    }

};


int main()
{

    Person *obj1 = new Doctor("heart", 1200, 1, "Pankaj", 25);
    obj1 -> talk();
    obj1 ->my_identity();
    delete obj1;

    cout<<" \n--------------------------------------------- \n ";

    Person *obj2 = new Teacher("Hindi", 2, "Shivam", 30);
    obj2 -> talk();
    obj2 ->my_identity();
    delete obj2;

    cout<<" \n--------------------------------------------- \n ";

    Student *obj3  = new ScStudent("Science", 3, "Mohini", 26);
    obj3 -> talk();
    delete obj3;

    cout<<" \n--------------------------------------------- \n ";
    Student *obj4  = new ArtStudent("Arts", 4, "Sonal", 26);
    obj4 -> talk();
    delete obj4;

    return 0;
}

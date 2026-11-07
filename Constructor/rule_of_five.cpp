#include<iostream>
#include<utility>
using namespace std;

class Demo
{
public:
    int *ptr;

    Demo(int n)
    {
        ptr = new int(n);
        cout << "Constructor" << endl;
    }

    // Copy Constructor
    Demo(const Demo &d)
    {
        ptr = new int(*d.ptr);
        cout << "Copy Constructor" << endl;
    }

    // Copy Assignment Operator
    Demo& operator=(const Demo &d)
    {
        cout << "Copy Assignment" << endl;

        if(this != &d)
        {
            delete ptr;
            ptr = new int(*d.ptr);
        }

        return *this;
    }

    // Move Constructor
    Demo(Demo &&d)
    {
        ptr = d.ptr;
        d.ptr = nullptr;

        cout << "Move Constructor" << endl;
    }

    // Move Assignment Operator
    Demo& operator=(Demo &&d)
    {
        cout << "Move Assignment" << endl;

        if(this != &d)
        {
            delete ptr;

            ptr = d.ptr;
            d.ptr = nullptr;
        }

        return *this;
    }

    void display()
    {
        if(ptr != nullptr)
            cout << *ptr << endl;
        else
            cout << "No Resource" << endl;
    }

    // Destructor
    ~Demo()
    {
        delete ptr;
        cout << "Destructor" << endl;
    }
};

int main()
{
    Demo d1(10);

    Demo d2 = d1;        // Copy Constructor

    Demo d3(20);
    d3 = d1;             // Copy Assignment

    Demo d4 = move(d1);  // Move Constructor

    Demo d5(30);
    d5 = move(d2);       // Move Assignment

    d1.display();
    d2.display();
    d3.display();
    d4.display();
    d5.display();

    return 0;
}

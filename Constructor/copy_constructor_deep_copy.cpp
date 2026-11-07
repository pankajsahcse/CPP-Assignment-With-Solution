#include<iostream>
using namespace std;

class Demo
{
public:
    int *ptr;

    Demo(int n)
    {
        ptr = new int(n);
    }

    // Deep Copy Constructor
    Demo(const Demo &d)
    {
        ptr = new  int(*d.ptr);  // Deep Copy
        cout<<"Copy Constructor"<<endl;
    }

    void display()
    {
        cout << *ptr << endl;
    }

     ~Demo()
    {
        delete ptr;
    }
};

int main()
{
    Demo d1(10);
    Demo d2 = d1;

    d1.display();
    d2.display();

    *d2.ptr = 50;

    cout << "After modification:" << endl;
    d1.display();
    d2.display();

    return 0;
}

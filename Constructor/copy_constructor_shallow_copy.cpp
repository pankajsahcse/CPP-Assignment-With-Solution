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

    // Shallow Copy Constructor
    Demo(const Demo &d)
    {
        ptr = d.ptr;  // Shallow Copy
        cout<<"Copy Constructor"<<endl;
    }

    void display()
    {
        cout << *ptr << endl;
    }

    /// Notes : shallow copy only for demonstrate, if we write destructor then memory leak, program crashed
    /// becouse of same memory shared .
//    ~Demo()
//    {
//        delete ptr;
//    }
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

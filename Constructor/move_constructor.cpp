#include <iostream>

using namespace std;

class Demo
{

    int *ptr;

public:
    Demo(int n)
    {
        ptr = new int(n);
        cout << "Normal Constructor" << endl;
    }

    // Move Constructor

    Demo(Demo &&d)
    {
        ptr = d.ptr;  // Resource transfer
        d.ptr = nullptr;  // Old object ko safe banana

        cout << "Move Constructor" << endl;

    }

    void display()
    {
        if(ptr != nullptr)
        {
            cout<<"Value of Ptr = " << *ptr <<endl;
        }
        else
        {
            cout<<"No Resource Available"<<endl;
        }
    }

    ~Demo()
    {
        delete ptr;
    }

};

int main()
{

  Demo obj(30);
  obj.display();

  Demo obj2 = move(obj);
  obj2.display();

  // After Resource transter to other object (obj2) no resource availble for obj
  obj.display();

    return 0;
}

#include <iostream>
using namespace std;

class MyArray
{
    int * ptr;
    int len;

public:
    MyArray(int l)
    {
        len = l;
        ptr = new int[len];
        cout<<"Normal Constructor"<<endl;
    }

    MyArray(const MyArray &m)
    {
        len = m.len;
        ptr = new int[len];

        for(int  i = 0; i <len; i++)
        {
            ptr[i] = m.ptr[i];
        }
        cout<<"Copy Constructor"<<endl;
    }

    MyArray & operator = (const MyArray &m)
    {
        if(this != &m)
        {
            int *temp = new int[m.len];

            for(int i = 0; i < len; i++)
            {
                temp[i] = m.ptr[i];
            }

            delete [] ptr;

            ptr = temp;
            len = m.len;
        }
        cout << "Assignment Operator" << endl;
        return *this;
    }

    ~MyArray()
    {
        delete [] ptr;
    }

    void acceptData()
    {
        for(int i = 0; i < len; i++)
        {
            cout << "Enter element: ";
            cin >> ptr[i];
        }
    }


    void display()
    {
        cout << "Array elements: ";

        for(int i = 0; i < len; i++)
        {
            cout << ptr[i] << " ";
        }

        cout << endl;
    }

};

int main()
{
    MyArray arr(4);

    arr.acceptData();
    arr.display();

    MyArray arr2 = arr;
    arr2.display();

    MyArray arr3(3);
    arr3.acceptData();
    arr3.display();

    arr3 = arr;

    arr3.display();


    return 0;
}

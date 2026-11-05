#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

struct Student
{
    int rollNo;
    string name;
    int marks;
};

vector<Student> student;

void addStudent()
{
    Student s;

    cout<<"Enter Name"<<endl;
    cin.ignore();
    getline(cin,s.name);




    cout<<"Enter RollNo"<<endl;
    cin>>s.rollNo;

    cout<<"Enter Marks"<<endl;
    cin>>s.marks;

    student.push_back(s);

    cout<<"\nStudent Added Successfully ! \n"<<endl;
}

void displayStudent()
{
    if(student.empty())
    {
        cout<<"Student Not Available"<<endl;
        return;
    }

    for(int i = 0; i < student.size(); i++)
    {
        cout<<"Student Name = " << student[i].name << endl;
        cout<<"Student RollNo = " << student[i].rollNo << endl;
        cout<<"Student Marks = " << student[i].marks << endl;
    }
    cout<<"\n " <<endl;

}

void searchByRollNo()
{
    if(student.empty())
    {
        cout<<"Student Not Available"<<endl;
        return;
    }

    int roll;
    cout<<"Enter roll no for search "<<endl;
    cin >> roll;

    bool isFound = false;

    for(int i = 0; i < student.size(); i++)
    {
        if(student[i].rollNo == roll)
        {
            cout<<"Student Founds "<<endl;
            cout << "Name: " << student[i].name << endl;
            cout << "Roll No: " << student[i].rollNo << endl;
            cout << "Marks: " << student[i].marks << endl;
            cout<<"\n " <<endl;
            isFound = true;
        }
    }
    if(!isFound)
    {
        cout<<"Student Not Available "<<endl;
    }
}

void sortByRollNo()
{
    if(student.empty())
    {
        cout<<"Student Not Available"<<endl;
        return;
    }

    sort(student.begin(), student.end(),
         [](Student a, Student b)
    {
        return a.rollNo < b.rollNo;
    }
        );

    cout<<"\nStudent Sorted By roll no \n"<<endl;
}

void findTop3Scorer()
{
    if(student.empty())
    {
        cout<<"Student Not Available"<<endl;
        return;
    }

    vector<Student> temp = student;

    sort(temp.begin(), temp.end(),
         [](Student a, Student b)
    {
        return a.marks > b.marks;
    });

    for(int  i = 0; i <temp.size() && i < 3 ; i++)
    {
        cout<<"Student Name = " << temp[i].name << endl;
        cout<<"Student RollNo = " << temp[i].rollNo << endl;
        cout<<"Student Marks = " << temp[i].marks << endl;
        cout<<"\n " <<endl;
    }

}

void deleteStudent()
{
    if(student.empty())
    {
        cout<<"Student Not Available"<<endl;
        return;
    }

    string n;
    cout<<"Enter Name to Delete Student "<<endl;
    cin>>ws;
    getline(cin,n);

    bool isDeleted = false;

    for(int i = 0; i < student.size(); i++)
    {
        if(student[i].name == n)
        {
            student.erase(student.begin() + i);
            cout<<"Student Deleted "<<endl;
            isDeleted = true;
            break;
        }
    }
    if(!isDeleted)
    {
        cout<<"\n Student Not Available \n"<<endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout << "\n===== Student Menu =====" << endl;
        cout<<"1. Add Student " <<endl;
        cout<<"2. Display Student " <<endl;
        cout<<"3. Sort By Roll No " <<endl;
        cout<<"4. Top 3 Scrorer Students " <<endl;
        cout<<"5. Search By Roll No " <<endl;
        cout<<"6. Delete Student " <<endl;
        cout<<"7. Exit " <<endl;

        cout<<" Enter Choice " <<endl;
        cin>>choice;

        switch (choice)
        {
        case  1:
        {
            addStudent();
            break;
        }
        case  2:
        {
            displayStudent();
            break;
        }

        case  3:
        {
            sortByRollNo();
            break;
        }
        case  4:
        {
            findTop3Scorer();
            break;
        }
        case  5:
        {
            searchByRollNo();
            break;
        }
        case  6:
        {
            deleteStudent();
            break;
        }
        case  7:
        {
            cout<<"Thank You !" <<endl;
            break;
        }

        default:
            cout<<"Invalid Choice "<<endl;
            break;
        }

    }
    while (choice != 7);

    return 0;
}

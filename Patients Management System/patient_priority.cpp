#include<iostream>
#include<queue>
#include<string>

using namespace std;

struct EmergencyPatient
{
    string name;
    int priority;

    bool operator <(const EmergencyPatient &other) const
    {
        return priority < other.priority;
    }
};

int main()
{
    queue<string> normalQueue;
    priority_queue<EmergencyPatient> emergencyQueue;

    int choice;

    do
    {
        cout << "\n===== HOSPITAL TOKEN SYSTEM =====\n";
        cout << "1. Add Normal Patient\n";
        cout << "2. Add Emergency Patient\n";
        cout << "3. Serve Next Patient\n";
        cout << "4. Display Waiting Patients\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
        {
            string name;

            cout << "Enter Patient Name: ";
            cin.ignore();
            getline(cin, name);

            normalQueue.push(name);

            cout << "Patient Added to Normal Queue.\n";
            break;
        }

        case 2:
        {
            EmergencyPatient p;

            cin.ignore();

            cout << "Enter Patient Name: ";
            getline(cin, p.name);

            cout << "Enter Priority (Higher Number = More Critical): ";
            cin >> p.priority;

            emergencyQueue.push(p);

            cout << "Emergency Patient Added.\n";
            break;
        }

        case 3:
        {
            if (!emergencyQueue.empty())
            {
                cout << "\nServing Emergency Patient: "<< emergencyQueue.top().name
                     << " (Priority "<< emergencyQueue.top().priority << ")\n";

                emergencyQueue.pop();
            }
            else if (!normalQueue.empty())
            {
                cout << "\nServing Normal Patient: "
                     << normalQueue.front() << endl;

                normalQueue.pop();
            }
            else
            {
                cout << "\nNo Patients Waiting.\n";
            }

            break;
        }

        case 4:
        {
            cout << "\nEmergency Patients Waiting: "
                 << emergencyQueue.size() << endl;

            cout << "Normal Patients Waiting: "
                 << normalQueue.size() << endl;

            break;
        }

        case 5:
        {
            cout << "\nExiting Program...\n";
            break;
        }

        default:
            cout << "\nInvalid Choice!\n";
        }

    }
    while(choice != 5);

    return 0;
}

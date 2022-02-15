/*1. Using the concept of array of object in C++, store more than 
one employee data consisting employee id, name, and salary.
 Show the name and ids of employees, those salaries are above 50000. */

#include <iostream>
#include <string>
using namespace std;
class Employee
{
    int employee_id;
    string name;
    float salary;

public:
    void set_data(int a, string b, float c)
    {
        employee_id = a;
        name = b;
        salary = c;
    }
    void print_data()
    {

        if (salary > 50000)
        {
            cout << endl
                 << "The following employee have salary more than 50000 : " << endl;
            cout << "The employee id of employee is: " << employee_id << endl;
            cout << "The name of employee is: " << name << endl;
            cout << "The salary of employee is: " << salary << endl;
        }
    }
};
int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee XYZ[n];
    int x;
    string y;
    float z;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter data: " << endl;
        cout << "Enter employee id for employee- " << i + 1 << " : ";
        cin >> x;
        fflush(stdin);
        cout << "Enter name for employee- " << i + 1 << " : ";
        getline(cin, y);
        cout << "Enter salary for employee- " << i + 1 << " : ";
        cin >> z;
        XYZ[i].set_data(x, y, z);
    }

    for (int i = 0; i < n; i++)
    {
        XYZ[i].print_data();
    }

    return 0;
}

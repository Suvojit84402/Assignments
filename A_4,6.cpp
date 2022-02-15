#include <iostream>
using namespace std;
class Leap_Year
{
private:
    int year;

public:
    Leap_Year(){};
    Leap_Year(int);
    ~Leap_Year();
};

Leap_Year::Leap_Year(int a)
{
    year = a;
}

Leap_Year::~Leap_Year()
{
    if (year % 400 == 0)
    {
        cout << "The year is Leap Year." << endl;
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "The year is Leap Year." << endl;
    }
    else
        cout << "The year is not Leap Year.";
}
int main()
{
    int y;
    cout << "Enter the Year: ";
    cin >> y;

    {
        Leap_Year l(y);
    }
    return 0;
}

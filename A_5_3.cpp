/*3.	Write a C++ program that stores the length and breadth of five rectangles.
 Show the rectangles in the output, whose length and breadth are equal.*/

#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float breadth;
    int num;
public:
    void set_data(float a, float b, int c)
    {
        length = a;
        breadth = b;
        num = c;
    }
    void print_data()
    {
        if (this->length == this->breadth)
        {
            cout << endl
                 << "For rectangle- " << num << endl;
            cout << "The length and breadth are equal " << endl;
        }
    }
};
int main()
{
    int n, l, b;
    cout << "Enter the number of Rectangle: ";
    cin >> n;
    Rectangle x[n];
    for (int i = 0; i < n; i++)
    {
        cout << "For Rectangle- " << i + 1 << " : " << endl;
        cout << "Enter the length: ";
        cin >> l;
        cout << "Enter the breadth: ";
        cin >> b;
        x[i].set_data(l, b, i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        x[i].print_data();
    }

    return 0;
}

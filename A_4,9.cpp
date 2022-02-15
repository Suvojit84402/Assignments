#include <iostream>
using namespace std;
inline int square(int a)
{
    return a * a;
}
int main()
{
    int x, p;
    cout << "Enter the no. of times the function call: ";
    cin >> p;
    cout << "Enter the number- : ";
    cin >> x;
    cout << endl;
    for (int i = 0; i < p; i++)
    {

        cout << "The square of the number " << x << " is: " << square(x) << endl;
    }

    return 0;
}

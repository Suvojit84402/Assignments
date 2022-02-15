#include <iostream>
#include <cmath>
using namespace std;
void Calculate(int, char);
void Calculate(int, int, char);
int main()
{
    int z,g;
    while (1)
    {
        cout << "Enter your Choice: " << endl
             << endl;
        cout << "1. Using two argument function" << endl
             << "2. Using three argument function" << endl;
        cin >> z;
        cout << endl;
        switch (z)
        {
        case 1:
            int x;
            char y;
            cout << "Enter the value of integer m: ";
            cin >> x;
            cout << endl;
            cout << "Enter r to reverse the number." << endl
                 << "Enter p to check the number is Prime or not." << endl;
            cin >> y;
            cout << endl;
            Calculate(x, y);
            break;
        case 2:
            int u, v;
            char w;
            cout << "Enter the value of integer a: ";
            cin >> u;
            cout << endl;
            cout << "Enter the value of integer b: ";
            cin >> v;
            cout << endl;
            cout << "Enter p to check the number is Palindrome or not." << endl
                 << "Enter l to get a to the power b. " << endl;
            cin >> w;
            cout << endl;
            Calculate(u, v, w);
            break;

        default:
            cout << "Wrong Choice!" << endl;
            break;
        }
        cout<<endl;
        cout<<"Press 0 to Continue."<<endl
            <<"Press any key to exit."<<endl;
            cin>>g;
            if (g==0)
            {
                continue;
            }
            else
                break;
            
    }
    return 0;
}
void Calculate(int m, char ch)
{
    int num = m;
    if (ch == 'r')
    {
        int rem, rev = 0;
        while (m)
        {

            rem = m % 10;
            rev = rev * 10 + rem;
            m /= 10;
        }
        cout << "The reverse of " << num << " is : " << rev << endl;
    }
    else if (ch == 'p')
    {
        int factors = 0;
        for (int i = 2; i < m; i++)
        {
            if (m % i == 0)
            {
                factors++;
            }
        }
        if (factors >= 1 || num == 1)
        {
            cout << "The number " << num << " is not Prime." << endl;
        }
        else
            cout << "The number " << num << " is Prime." << endl;
    }
    else
        cout << "Wrong Choice!" << endl;
}
void Calculate(int a, int b, char ch)
{
    int num = a;
    if (ch == 'p')
    {
        int rem, rev = 0;
        while (a)
        {

            rem = a % 10;
            rev = rev * 10 + rem;
            a /= 10;
        }
        if (num == rev)
        {
            cout << "The number " << num << " is Palindrome" << endl;
        }
        else
            cout << "The number " << num << " is not Palindrome" << endl;
    }
    else if (ch == 'l')
    {

        cout << "The value of " << a << " to the power " << b << " is " << pow(a, b) << endl;
    }
    else
        cout << "Wrong Choice!" << endl;
}

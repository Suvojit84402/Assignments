#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class STRING
{
    string s;

public:
    STRING()
    {
        s = "";
    }
    STRING(string a)
    {
        s = a;
    }
    STRING operator+(STRING b)
    {
        return STRING(s + " " + b.s);
    }
    void display()
    {
        cout << s << endl<<endl;
    }
    void rev_display()
    {
        reverse(s.begin(), s.end());

        /*string l;
            int n=s.length();
            for(int i=n-1;i>=0;i--)
            l.push_back(s[i]);*/

        cout << endl
             << "The Reverse Concatinated String is:  " << s << endl
             << endl;
    }
};
int main()
{
    STRING s1, s2, s3;
    string s, t;

    cout << "Enter 1st string:  ";
    getline(cin, s);
    //cin >> s;

    s1 = STRING(s);

    cout << "Enter 2nd string:  ";
    getline(cin, t);
    //cin >> t;

    s2 = STRING(t);

    cout <<endl<< "String 1 is: ";
    s1.display();
    cout << "String 2 is: ";
    s2.display();

    s3 = s1 + s2;
    cout << "The Concatenated String is:  ";
    s3.display();
    s3.rev_display();
    return 0;
}






/*#include <iostream>
using namespace std;
#include <cstring>

class S
{
    string a;
    string b;

public:
    S()
    {
        
    }
    S(string p, string q)
    {
        a = p;
        b = q;
    }
    void display()
    {
       cout<<a;
       cout<<b;
    }
    S operator+(S f)
    {
        S temp;
        temp.a = strcat(f.a, f.b);
        temp.b = strrev(temp.a);
        return temp;
    }
};
int main()
{
    string p, q;
    cin >> p >> q;

    return 0;
}
*/
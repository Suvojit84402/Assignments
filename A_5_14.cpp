/*14.	Create a class Person and two derived classes Employee, and Student, inherited from class Person.
Now create a class Manager which is derived from two base classes Employee and Student.
Show the use of the virtual base class.*/

#include<iostream>
using namespace std;
class Person
{
protected:
    int age;
public:
    void set_age(int a){
        age=a;
    }
    void print_age(){
        cout<<"Your age is: "<<age<<endl;
    }
};
class Employee:virtual public Person
{
protected:
     int id;
public:
     void set_id(int a){
        id=a;
    }
    void print_id(){
        cout<<"Your id is: "<<id<<endl;
    }
};
class Student:virtual public Person
{
protected:
        int roll;
public:
    void set_roll(int a){
        roll=a;
    }
    void print_roll(){
        cout<<"Your Roll No. is: "<<roll<<endl;
    }
};
class Manager:public Employee, public Student
{
private:
    int z=999;
public:
    void print(){
        print_age();
        print_id();
        print_roll();
        cout<<"The value of Z is: "<<z<<endl;
    }
};
int main()
{
    Manager m;
    m.set_age(25);
    m.set_id(1234);
    m.set_roll(1);
    m.print();
    return 0;
}


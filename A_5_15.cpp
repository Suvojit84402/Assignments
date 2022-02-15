/*1. Write a program with Student as abstract class and create derive classes Engineering,
 Medicine and Science from base class Student. Create the objects of the derived classes and
 process them and access them using array of pointer of type base class Student.*/

#include<iostream>
using namespace std;
class Student
{
public:
    virtual void Print()=0;
};
class Engineering:public Student
{
private:
    int eng_id;
public:
    Engineering( int b){
        eng_id=b;
    }
    void Print(){
        cout<<"This is Engineering Student."<<endl;
        cout<<"Engineering Student id is: "<<eng_id<<endl;
    }
};
class Medicine:public Student
{
private:
    int med_id;
public:
    Medicine(int b){
        med_id=b;
    }
    void Print(){
        cout<<"This is Medical Student."<<endl;
        cout<<"Medical Student id is: "<<med_id<<endl;
    }
};
class Science:public Student
{
private:
    int Sc_id;
public:
    Science(int b){
        Sc_id=b;
    }
    void Print(){
        cout<<"This is Science Student."<<endl;
        cout<<"Science Student id is: "<<Sc_id<<endl;
    }
};
int main()
{
    Engineering x(123);
    Medicine y(456);
    Science z(789);
    Student* ptr[3]={&x,&y,&z};
    ptr[0]->Print();
    cout<<endl;
    ptr[1]->Print();
    cout<<endl;
    ptr[2]->Print();
    delete ptr;
    return 0;
}


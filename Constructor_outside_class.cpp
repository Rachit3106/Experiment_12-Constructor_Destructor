/*
Name : Rachit Deshpande
PRN : 24070123035
Batch : A2
*/
#include <iostream>
using namespace std;
class Student{
    int roll_no;
    string name;
    char div;
    public:
    Student(int r=0,string n="xyz",char d='X');
    void display(){
        cout << "Student Name: " << name << endl;
        cout << "Student Roll No. : " << roll_no << endl;
        cout << "Student Division : " << div << endl;
    }
};
Student::Student(int r,string n,char d){      // default constuctor and parameterized constructor
        roll_no=r;
        name=n;
        div=d;
    } 
int main(){
    //Syntax for Student Class Constuctor:- roll_no.,Name,Div
    int roll;string s;char c;
    Student s1;
    Student s2(35);
    Student s3(35,"Rachit");
    Student s4(35,"Rachit",'A');
    cout << "s1.display() :"<<endl;
     s1.display();
    cout << endl;
    cout << "s2.display() :"<<endl;
    s2.display();
    cout << endl;
    cout << "s3.display :" << endl;
    s3.display();
}
/*
Output:-
s1.display() :
Student Name: xyz
Student Roll No. : 0
Student Division : X

s2.display() :
Student Name: xyz
Student Roll No. : 35
Student Division : X

s3.display :
Student Name: Rachit
Student Roll No. : 35
Student Division : X
*/

/*cc file for the student class. this class contains all data for students
and their functions*/
#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
#include "Student.h"

// overloaded constructor 
Student::Student(string str1, string str2, string str3, float gpapgm)
  : id(str1), name(str2), major(str3), gpa(gpapgm)
{
  cout<<"-- Student:  "<< str2 <<endl;
}

Student::~Student()
{
  cout<<"--- Student:  "<< name <<endl;
}

string Student::getName() const 
{ return name; } // name getter function 

/* void Student::setName(string n) 
{ name = n; } // name setter function */

string Student::getID()
{ return id; }  //  id getter function

/* void Student::setNum(string num) 
{ number = num; } // id setter function */


bool Student::lessThan(Student* student) // function to compare students by name order
{
  if (this->name < student->name){
    return true;
  }
  else{
    return false;
  }
}

void Student::print() const // function to print students and their information
{
  cout<<"Student:  " << id << "  " << left << setw(10) << name << "      "
    << setw(15) << major << "   GPA: "
    << fixed << setprecision(2) << setw(5) << right << gpa << endl;
cout << "--------------------------------------------------------------------" << endl;
}

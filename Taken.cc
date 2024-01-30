/* header file for the taken class. this class combines student and course class*/
#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

#include "Taken.h"

Taken::Taken(Student* s, Course* c, string g) //    overloaded constructor
  : stu(s), course(c), grade(g)
{
  cout<<"--Student:  "<< s <<endl;
}

Student* Taken::getStudent() // student getter function
{ return stu; }

Course* Taken::getCourse() // course getter function
{ return course; }

void Taken::print() // print taken
{
  cout << "Taken: " << " " << getStudent()->getName() << " " << getCourse()->getCourseCode()
       << " "  << grade << endl;
}


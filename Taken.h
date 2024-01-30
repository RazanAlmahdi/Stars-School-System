/* header file for the taken class. this class combines student and course class*/
#ifndef TAKEN_H
#define TAKEN_H

#include "Course.h"
#include "Student.h"

class Taken
{
    //  methods
  public:
    Taken(Student*, Course*, string=""); // overloaded constructor
    Student* getStudent(); // getter student function
    Course* getCourse(); // getter course function
    void print(); // print taken

//  attributes
  private:
    string grade; // grade
    Student* stu; // student object
    Course* course; // course object


};

#endif
/*the source code file for the header of control*/
#ifndef CONTROL_H
#define CONTROL_H

#include "School.h"
#include "View.h"

class Control
{
  public:
    Control(); //default constructor
    void launch(); //launching function for the entire program

  private:
    void startStudents(School*); //function to initialize all students
    void startCourses(School*); //function to initialize all courses
    School school; //object of school class
    View view; //object of view class
};

#endif
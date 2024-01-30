/*header file for course class that has the functions needed to manage 
all courses*/
#ifndef COURSE_H
#define COURSE_H


class Course
{
    // methods
  public:
    Course(int=0, string="", int=0, char='\0', string="",string=""); //overloaded constructor
    ~Course(); // destructor
    bool lessThan(Course*); // comparing function
    string getCourseCode(); // couse code getter function
    int getId(); // id getter function
    void print(); // print function
    
//  attributes
  private:
    int id; //  course id
    string subject; //  course subject
    int code; //    course code
    char section; //    course section
    string term; // course term
    string instructor; //   course instructor
  };

#endif
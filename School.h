/*header file for School class. this class manages student, course, and Taken
class and has the functions that enable us to add student, course, taken, and 
print them*/
#ifndef SCHOOL_H
#define SCHOOL_H
#define MAX_SIZE 64

#include "Course.h"
#include "Student.h"
#include "Taken.h"
#include "DynArray.h"
#include "StatArray.h"

class School
{
    //  methods 
  public:
    School(string=""); // constructor
    ~School(); // destructor
    void addStudent(Student*); // function to add student to array
    void addCourse(Course*); // function to add course to array
    void addTaken(string, int, string); // function to add taken to array
    void printStudents(); // funcrion to print students
    void printCourses(); // function to print courses
    void printTaken(); // function to print all taken courses
    void printTakenByStudent(string); // function to print taken courses by a student
    
    // attributes
  private:
    string name; // name of school
    DynArray collectionOfStudents; // student collection object of type dynarray
    StatArray collectionOfCourses; // course collection object of type statarray
    Taken* collectionOfTaken[MAX_SIZE]; // taken collection object of type taken
    int numOfTaken; // number of courses taken
};

#endif
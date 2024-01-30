/*header file for static array class that puts all courses into an array 
and then prints them*/
#ifndef STATARRAY_H
#define STATARRAY_H

#define MAX_ARR 64

#include "Course.h"

class StatArray
{
    //  methods 
  public:
    StatArray(); // default constructor
    ~StatArray(); //    destructor
    void add(Course*); //   function to add course to array
    bool find(int, Course**); //    function to find a student id related to course
    void print(); //    print function

//  attributes
  private:
    Course* courseArray[MAX_ARR]; //    array object of type course
    int   size; //  size of array
};

#endif
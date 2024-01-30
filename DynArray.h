/*header file for dynamic array that creates an array for all students and
their information*/
#ifndef DYNARRAY_H
#define DYNARRAY_H

#define MAX_ARR 64

#include "Student.h"

class DynArray
{
    //  methods
  public:
    DynArray(); // default constructor
    ~DynArray(); // destructor
    void add(Student*); //  add student to the array
    bool find(string, Student**); //    find student by id in the array
    void print(); // print the array


  private:
    Student** studentArray; // array of type student
    int   size; // size of array
};

#endif
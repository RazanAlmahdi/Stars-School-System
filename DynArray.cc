/*srouce code file for dynamic array that creates an array for all students and
their information*/
#include <iostream>
using namespace std;

#include "DynArray.h"

DynArray::DynArray() // default constructor
{
  size = 0;
  studentArray = new Student*[MAX_ARR];
}

DynArray::~DynArray() //    destructor
{
  for (int i=0; i<size; ++i){
      delete studentArray[i];
  }
  delete [] studentArray;
  cout << endl << endl;
  cout << "deleting dynamic array . . ." << endl;
  cout << endl << endl;

}

void DynArray::add(Student* student)
{
  if (size >= MAX_ARR) //just return if array if full
    return;

  int pos = 0;
  for (int i=0; i<size; ++i)
  {
    if (student->lessThan(studentArray[i])){ //find the position to insert student
      pos = i;
      break;
    }

    else{ //if its > the last element
      pos = size;
    }
  }

  for (int i=size;i>pos;--i){ //shift the array right from the back
      studentArray[i] = studentArray[i-1];
  }

  studentArray[pos]=student;
  size++;
}

bool DynArray::find(string id, Student** student)
{
  for(int i=0;i<size;++i) //loop through the array to find student id 
    if (studentArray[i]->getID() == id)
      *student = studentArray[i];
      return true;

  *student = NULL;  //if after loop it cannott find the student, set the pointer to NULL
  return false;
}

void DynArray::print()
{
  //cout << endl << endl << "all Students:" << endl;
  for (int i=0; i<size; ++i)
    studentArray[i]->print();
}



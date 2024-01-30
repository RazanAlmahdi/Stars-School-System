/*cc file for static array class that puts all courses into an array 
and then prints them*/
#include <iostream>
using namespace std;
#include "StatArray.h"

StatArray::StatArray() //   default constructor
{
  size = 0;
}

StatArray::~StatArray() //  destructor
{
  for (int i=0; i<size; ++i)
    delete courseArray[i];
     cout << endl << endl;
     cout << "deleting static array . . ." << endl;
     cout << endl << endl;
}

void StatArray::add(Course* course)
{
  if (size >= MAX_ARR){ //   if array is full, output message and return
  cout << "The array is full now!" << endl;
    return;}

  int position=0;
  for (int i=0; i<size; ++i)
  {
    if (course->lessThan(courseArray[i])){ //   find the position to insert using less than function
      position = i;
      break;
    }

    else{ //if it is > the last element
      position = size;
    }
  }

  for (int i=size;i>position;--i){ //    shift the array right from the back
      courseArray[i] = courseArray[i-1];
  }

  courseArray[position]=course;
  size++;
}

bool StatArray::find(int id, Course** course)
{
  for(int i=0;i<size;++i){ //loop through the courseArr to find course id 
    if (courseArray[i]->getId() == id){
      *course = courseArray[i];
      return true;
    }
  }
  *course = NULL;  //if after loop it cant find the course then set the pointer to NULL
  return false;
}

void StatArray::print() //  function to print all courses according to size of array
{
  //cout << endl << endl << "All Courses:" << endl;
  for (int i=0; i<size; ++i)
    courseArray[i]->print();

  cout << endl;
}



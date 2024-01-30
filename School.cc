/*source code file for School class. this class manages student, course, and Taken
class and has the functions that enable us to add student, course, taken, and 
print them*/
#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

#include "School.h"

School::School(string sname) // constructor
: name(sname)
{
  numOfTaken =0;
}

School::~School() // destructor
{
  for (int i=0; i<numOfTaken; ++i){
    delete collectionOfTaken[i];
    cout << "deleting Taken Array . . ." << endl;
    cout << endl;
  }
}

void School::addStudent(Student* student) // function to add student object to array
{
  collectionOfStudents.add(student);
}

void School::addCourse(Course* course) // function to add course object to array
{
  collectionOfCourses.add(course);
}

void School::addTaken(string studentID, int courseID, string grade) // function to add taken to array
{
  //    initialize both pointers to null
  Student* student = NULL;
  Course* course = NULL;
 if (collectionOfStudents.find(studentID, &student) && collectionOfCourses.find(courseID, &course)){ // find a student and course with given ID and store it at student address
  Taken* taken;

  if ((student != NULL) && (course != NULL)){ // if student and course pointers are not null, create taken array
    taken = new Taken(student, course, grade);
    collectionOfTaken[numOfTaken] = taken; 
    numOfTaken++; // increment taken capacity
  }
   cout << endl;
   cout << "-----------------------------------------------" << endl;
   cout << student->getName() << " has been successfully registered in this course." << endl;
   cout << "-----------------------------------------------" << endl;
   cout << endl;
 }
  else {
  cout << endl;
  cout << "-----------------------------------------------" << endl;
  cout << "Student ID/ Course ID was not found. Try again!" << endl;
  cout << "-----------------------------------------------" << endl;
  cout << endl;
  }
}

void School::printStudents() // function to print the students as whole
{
  cout << endl;
  cout << name << "--Students: " << endl;
  cout << endl;
  collectionOfStudents.print();
}

void School::printCourses() // function to print the courses as whole
{
  cout << endl;
  cout << name << "--Courses: " << endl;
  cout << endl;
  collectionOfCourses.print();
}
void School::printTaken() // function to print the taken as whole
{
  cout << endl;
  string message = "None!!!";
  cout << "------------------------------------------------------------" << endl;
  if (numOfTaken == 0){
    cout << name << "--Taken: " << message << endl;
  }
  else{
    cout << name << "--Taken: " << endl;
    for(int i=0; i <numOfTaken; ++i){
      collectionOfTaken[i]->print();
    }
  }
  cout << "------------------------------------------------------------" << endl;
}

void School::printTakenByStudent(string studentID) // function to print the courses taken by a student
{
    Student* stuID = NULL;
    if (numOfTaken == 0)
    {
     cout << endl;
     cout << "--------------------------------------------------" << endl;
     cout << "----------No courses taken by this student!-------" << endl;
     cout << "--------------------------------------------------" << endl;
     cout << endl;
    }
    else{
  //first set studentID to NULL
  Student* stuID = NULL;}
  
   if(collectionOfStudents.find(studentID, &stuID))
    {
  for(int i=0; i < numOfTaken; ++i)
  {
    if (collectionOfTaken[i]->getStudent() == stuID)
    { // call find to find the student
      cout << endl;
      cout << name << "Taken By  " << collectionOfTaken[i]->getStudent()->getName() << endl;
      collectionOfTaken[i]->getCourse()->print();
    }
      
  }
        
}
  else{
    cout << endl;
  cout << "--------------------------------------------------" << endl;
  cout << "-----------------Student Not Found!---------------" << endl;
  cout << "--------------------------------------------------" << endl;
  cout << endl;
  }

}




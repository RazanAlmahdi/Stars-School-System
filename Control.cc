/*the source code file for the header of control*/
#include <iostream>
using namespace std;
#include <string>
#include "Control.h"

Control::Control()  //  default constructor
 : school("Effat University ")
{

}

void Control::launch() //   launching function for the entire program
{
  int choice, id;
  string n, grd;
  startStudents(&school); //    the initializing functions take the school object value by reference
  startCourses(&school);

//  switch for the option given by user. case 1: choice 0 = exit
  while (1) { 
    view.showMenu(choice);
    if (choice == 0)
      break;

//  case 2: print all students and their information
    if (choice == 1) { 
      school.printStudents();
    }
//  case 3: print all courses and their information
    if (choice == 2) { 
      school.printCourses();
    }
//  case 4: print all courses taken
    if (choice == 3) {
      school.printTaken();
    }
//  case 5: print courses taken by a students
    if (choice == 4) {
      view.printString("Enter your Student ID: ");
      view.readString(n);
      school.printTakenByStudent(n);
    }
//  case 6: add a course taken by a student
    if (choice == 5) {
      view.printString("Enter your Student ID: ");
      view.readString(n);
      view.printString("Enter your Course ID: ");
      view.readInt(id);
      view.printString("Enter your Grade: ");
      view.readString(grd);
      school.addTaken(n,id,grd);

    }
  }
}

//  function to initialize all values for the student objects
void Control::startStudents(School* school)
{
  cout << "----------------------------------------------------" << endl;
  cout << "--------------------The Students--------------------" << endl;
  cout << "----------------------------------------------------" << endl;
  school->addStudent(new Student("S20106649", "Razan Almahdi", "CS", 3.75));
  school->addStudent(new Student("S20177632", "Aicha Sidiya", "CS", 3.75));
  school->addStudent(new Student("S21574411", "Aida Alulu", "ARCH", 3.51));
  school->addStudent(new Student("S20640553", "Layal Ghryani", "CS", 3.75));
  school->addStudent(new Student("S11034592", "Leen Almalki", "ARCH", 3.55));
  school->addStudent(new Student("S20213597", "Mariam Kadi", "MKT", 3.64));
  school->addStudent(new Student("S34955605", "Nour Mohammed", "ECE", 3.60));
  school->addStudent(new Student("S50686199", "Lujain Salam", "CA", 3.45));
  cout << "----------------------------------------------------" << endl;
}
//  function to initialize all values for the course objects
void Control::startCourses(School* school)
{
  cout << "--------------------The Courses--------------------" << endl;
  cout << "----------------------------------------------------" << endl;
  school->addCourse(new Course(13494, "CS", 1001, '1', "S20", "HK"));
  school->addCourse(new Course(84932, "CS", 2021, '2', "F21", "HK"));
  school->addCourse(new Course(43929, "CS", 1131, '3', "F21", "AS"));
  school->addCourse(new Course(24492, "CS", 3067, '1', "S22", "KK"));
  school->addCourse(new Course(78431, "MATH", 101, '1', "F21", "TB"));
  school->addCourse(new Course(92184, "MATH", 201, '2', "S22", "MM"));
  school->addCourse(new Course(64913, "CS", 2111, '3', "F20", "ZB"));
  school->addCourse(new Course(58764, "GANT", 143, '2', "F21", "MK"));
  school->addCourse(new Course(32009, "GENG", 162, '1', "F20", "DA"));
  school->addCourse(new Course(45871, "GISL", 171, '3', "S20", "MK"));
  school->addCourse(new Course(43209, "GARB", 161, '2', "W20", "AD"));
  school->addCourse(new Course(10032, "BIO", 112, '1', "F21", "SS"));
  school->addCourse(new Course(33280, "GFREN", 140, '3', "S22", "CA"));
  school->addCourse(new Course(60431, "GGERM", 180, '2', "F21", "FJ"));
  school->addCourse(new Course(44937, "STAT", 101, '2', "F20", "OK"));
  school->addCourse(new Course(80992, "STAT", 201, '1',  "S22", "OK"));
  school->addCourse(new Course(71102, "ANIM", 1405, '3', "F21", "MG"));
  school->addCourse(new Course(69810, "ARCH", 2043, '2', "F22", "HL"));
  school->addCourse(new Course(65019, "ARCH", 1030, '1', "S22", "HL"));
  cout << "----------------------------------------------------" << endl;
  cout << "----------------------------------------------------" << endl;
}



/*source code file for course class that has the functions needed to manage 
all courses*/
#include <iostream>
using namespace std;
#include <string>

#include "Course.h"

Course::Course(int id, string s, int c, char sctn, string t, string instr)
  : id(id), subject(s), code(c), section(sctn), term(t), instructor(instr)
{
  cout<<"-- Course:  "<< s <<endl;
}

Course::~Course()
{
  cout<<"-- Course:  " <<endl;
}

int Course::getId(){return id;}

bool Course::lessThan(Course* course)
{
  if (this->subject < course->subject){ //sort by subject
    return true;
  }
  else if (this->subject == course->subject){
    if (this->code < course->code){ //sort by code
      return true;
    }
    else if (this->code == course->code){
      if (this->term < course->term){ //sort by section
        return true;
      }
      else if (this->term == course->term){
        if (this->section < course->section){
          return true;
        }
        else{
          return false;
        }
      }
      else{
        return false;
      }
    }
    else{
      return false;
    }
  }
  else{
    return false;
  }
}

string Course::getCourseCode()
{
  string res;
  //result = name + std::to_string(age);
  res = subject + to_string(code);
  return res;
}

void Course::print()
{
    
  cout<<"Course ID: " << id << "    " << subject << "   " << code << "   " << "Section: " << section << "  Term: " << term <<
  "   "  << "  Instructor: " << instructor << endl;
  cout << "----------------------------------------------------------------------------------" << endl;
}

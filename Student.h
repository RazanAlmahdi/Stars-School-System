/*the header file for the student class. this class manages the data of the 
students */
#ifndef STUDENT_H
#define STUDENT_H


class Student
{
// the methods
  public:
    Student(string="", string="", string="", float=0.0f); // overloaded constructor
    ~Student(); // destrcutor
    string getName() const; //  name getter function
    //void setName(string n); //    name setter function
    string getID(); // id getter function 
    //void setNum(string num); //   id setter function
    bool lessThan(Student*); // function to compare students
    void print() const; // function to print the students
    
//  the attirbutes
  private:
    string id; //   student id
    string name; // student name
    string major; // student major
    float  gpa; //  student gpa

};

#endif
/*source code for view class. this class displays the menu of the program and
takes the option value given by the user to activate the other functions*/
#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

#include "View.h"

void View::showMenu(int& choice) // function to display the option menu
{
//  display options to user
  cout << endl << endl;
  cout << "What would you like to do? "<< endl;
  cout << "  (1) Print students" << endl;
  cout << "  (2) Print courses" << endl;
  cout << "  (3) Print all courses taken" << endl;
  cout << "  (4) Print courses taken by student" << endl;
  cout << "  (5) Add course taken by student" << endl;
  cout << "  (0) Exit" << endl<<endl;

  cout << "Enter your selection: ";
  cin >> choice;
  if (choice == 0) {//   if selection is 0= exit. program will end
  cout << endl << endl;
  cout << "------------Thank you for using our database! Have a great day!~----------------" << endl;
  cout << "--------------------------------------------------------------------------------" << endl;
  cout << endl << endl;
    return;}

// if the choice is within the selection pramaeters, proceed
  while (choice < 1 || choice > 5) { 
    cout << "Enter your selection: ";
    cin >> choice;
  }

}

// function to ake string input from user
void View::printString(string str) 
{
  cout << str;
}

//function to read integer inputs from user
void View::readInt(int& x) 
{
  cin >> x;
}

//   function to read string input from user
void View::readString(string& str) 
{
  cin >> str;
}

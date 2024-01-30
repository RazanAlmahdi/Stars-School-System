/*the main test driver file for the program*/
#include <iostream>
using namespace std;
#include <string>
#include "Control.h"

int main()
{
    cout << endl << endl;

    //  control class object
    Control menu;
    cout << "--------------------------------------------------------------------------------" << endl;

    cout << "--------------Hello and welcome to Effat University's database!-----------------" << endl;
    cout << "--------Here is a brief list of all the students and courses in our database:   " << endl;
    cout << endl << endl;

//  call the launch function from control class
  menu.launch();

  return 0;
}

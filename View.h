/*header file to view class. this file shows the menu to the user*/
#ifndef VIEW_H
#define VIEW_H

class View
{
//  all members are public members in this class
  public:
    void showMenu(int&); // function to output menu. int passed by reference
    void printString(string); //function to get input from user
    void readInt(int&); //function to take selected choice by user for switch
    void readString(string&); //function to read input given by user
};

#endif
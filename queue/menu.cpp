//***************************************************************************
//Name: Mariessa Logan
//Date 2/16/18
//Description: This will create the menu for the program.
//***************************************************************************
#include <iostream>
#include "head.hpp"

int menu()
{
  int option;
  char temp_string[20];
  do{
    std::cout << "\n*************************************************************************************************************\n";
    std::cout << "Choose from the following options:\n";
    std::cout << "1. Add a value to the back of the queue\n";
    std::cout << "2. Display the front value\n";
    std::cout << "3. Remove the front node\n";
    std::cout << "4. Display the queue's content\n";
    std::cout << "5. Exit.\n";
    std::cin >> temp_string;
    option = atoi(temp_string);
  }while(option != 1 && option !=2 && option !=3 && option !=4 && option !=5);
  return option;
}


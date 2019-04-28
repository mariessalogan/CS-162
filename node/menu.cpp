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
    std::cout << "Welcome to the linked list program!\n";
    std::cout << "Choose from the following options:\n";
    std::cout << "1. Add a new node to the head;\n";
    std::cout << "2. Add a new node to the tail;\n";
    std::cout << "3. Delete from head;\n";
    std::cout << "4. Delete from tail;\n";
    std::cout << "5. Traverse the list reversely;\n";
    std::cout << "6. Exit.\n";
    std::cin >> temp_string;
    option = atoi(temp_string);
  }while(option != 1 && option !=2 && option !=3 && option !=4 && option !=5 && option != 6);
  return option;
}



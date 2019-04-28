//***************************************************************************
//Name: Mariessa Logan
//Date: 2/16/18
//Description: This is the main file for the program that will call the 
//other functions.
//**************************************************************************
#include <iostream>
#include "head.hpp"
#include "node.hpp"
int main()
{
  int men;
  NodeLink p1;
  int input;
  do
  {
    men = menu();
    if(men == 1)
    { 
      
        std::cout << "Enter a value: ";
        std::cin >> input;
        while(!std::cin)                                
        {
          std::cin.clear();
          std::cin.ignore();
          std::cout<< "Please only enter an integer:";
          std::cin >> input;
        }
      p1.addHead(input);
    }
    else if(men == 2)
    {
      std::cout << "Enter a value: ";
      std::cin >> input;
        while(!std::cin)                                      
        {
          std::cin.clear();
          std::cin.ignore();
          std::cout<< "Please only enter an integer:";
          std::cin >> input;
        }
      p1.addTail(input);
    } 
    else if(men == 3)
    {
      p1.delHead();
    }
    else if(men == 4)
    {
      p1.delTail();
    } 
    else if(men == 5)
    { 
      p1.printRev();
    }
    else
    {
      std::cout << "Bye!\n";
    }
    if(men !=6)
    {
    p1.trav();//print out the list after every option
    }
  }while(men !=6);
  p1.~NodeLink();
  return 0;
}

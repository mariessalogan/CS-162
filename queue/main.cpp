//***************************************************************************
//Name: Mariessa Logan
//Date: 2/124/18
//Description: This is the main file for the program that will call the 
//other functions.
//**************************************************************************
#include <iostream>
#include "head.hpp"
#include "queue.hpp"
int main()
{
  int men;
  Queue p1;
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
      p1.addBack(input);
    }
    else if(men == 2)
    {
      if(p1.isEmpty() == true)
      {
        std::cout << "The queue is empty.\n";
      }
      else
      {
        std::cout << "The head is " <<p1.getFront()<< ".\n";
      }
    }
    else if(men == 3)
    {
      p1.removeFront();
    } 
    else if(men == 4)
    { 
      p1.printQueue();
    }
    else
    {
      std::cout << "Bye!\n";
      p1.~Queue();
      return 0;
    }
  }while(men !=5);
  p1.~Queue();
  return 0;
}

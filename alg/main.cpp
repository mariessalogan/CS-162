//**********************************************************************************************************************
//name: Mariessa Logan
//Date: 3/2/18
//Description: This program will read input from a file and sort it using algorithms
//***********************************************************************************************************************
#include <iostream>
#include <fstream>
#include "func.hpp"

using namespace std;
int main()
{
  ifstream inFile;                                                                                                      
  int num;
  int val;
  int arr[10];
  int i = 0;
  bool found = false;
  std::cout << "Welcome to my program!\nIt's going to read some numbers from a file and sort them!\n";
  string fileName = "first.txt";
  string fileName2 = "beginning.txt";
  string fileName3 = "middle.txt";
  string fileName4 = "end.txt";
  simpleSearch(fileName);
  simpleSearch(fileName2);
  simpleSearch(fileName3);
  simpleSearch(fileName4);

  return 0;
} 

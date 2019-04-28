//***************************************************************************
//Name: Mariessa Logan
//Date 2/9/18
//Description: These functions will demonstrate my ability to use recursive
//functions.
//***************************************************************************
#include <iostream>
#include <string>

void str_func(char array[], int length)
{
  if(length >= 0)//base case
  {
    std::cout << array[length];
    str_func(array, length-1);
  }
}

int sum_func(int arr2[], int amount, int len)
{
  //int amount;
  if(len >0)
  {
    len -= 1;
    int temp = arr2[len];
    //std::cout << temp << " in the array. \n";
    amount += temp;
    //std::cout<< "sum " << amount << "\n";
    sum_func(arr2, amount, len);
  } 
  if(len == 0)
  {
    return amount;
  }
}

int tri_func(int num)
{
  int result = 0;
  if(num >=0)
  {
    result = tri_func(num-1) + num;
  }
  return result;
}
int menu()
{
  int option;
  std::cout << "Welcome to Mariessa's Recursion fun!\n\n\n";
  do{
    std::cout << "Which function would you like to try?\n";
    std::cout << "1. Reverse a string \n2. Sum of an array of numbers \n3. Triangular number of n\n4. Exit\n ";
    std::cin >> option;
  }while(option!= 1 && option !=2 && option != 3 && option !=4);
  return option;  
}

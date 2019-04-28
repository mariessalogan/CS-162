//****************************************************
//Name: Mariessa Logan
//Date:2/9/18
//Description: this will call the recursive functions I created.
//***************************************************************
#include <iostream>
#include "func.hpp"
#include <string>
#include <cstring>
using namespace std;
int main()
{
  int n;
  int option;  
  option = menu();
  //reverse string calling function
  if(option == 1)
  {
    int length = 50;
    cout << "Enter a string you would like reversed, up to 50 characters\n";
    string temp_string;
    //make sure getline doesn't call previous input
    cin.ignore();
    //get user string
    getline(cin, temp_string);
    length = temp_string.length();
    char array[length+1];
    strcpy(array,temp_string.c_str());    
    str_func(array, length);
    cout << ". Isn't that neat?\n"; 
  }
// sum of an arra calling function
  if(option ==2)
  {
    int len = 0;
    int amount = 0;
    cout<< "How many numbers would you like to add together?\n";
    cin >> len;
    cout << "Please enter the " << len << "numbers you would like to add together.";
    int arr2[len];
    for (int i = 0; i < len; i++)
    {
      int num;
      cin >> num;
      arr2[i] = num;
    }
    //for(int i = 0;i< len; i++)
    //{
      //cout << arr2[i] << " +";
    //} 
    //sum_func(arr2, amount, len);
    cout << "The sum of the array is " << sum_func(arr2, amount, len) << ". \n";
  }
//Get that triangular number
  if(option == 3)
  { 
    cout << "What number would you like to use for n?";
    cin >> n;
    cout << "The triangle of sum of n is " << tri_func(n) << ".\n"; 
  }
  if(option == 4)
  {
    return 0;
  }
}

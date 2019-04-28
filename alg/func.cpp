//*************************************************************************
//Name: Mariessa Logan
//Date 3/2/18
//Description: This will hold the search algorithms
//************************************************************************
#include <iostream>
#include <fstream>
#include "func.hpp"
using namespace std;
void simpleSearch(string fileName)
{

  ifstream inFile;                                                                           
  int num;
  int val;
  int i = 0;
  bool found = false;
  int count = 0;
  inFile.open(fileName);                                 
  if(!inFile)
  {
    std::cout << "Error: Unable to open file.\n";
  }
  std::cout << "The numbers in the " << fileName << " file are: ";
  while(inFile >> num)
  {
    std::cout<< " " << num << " "; 
    count++;
  }
  int arr[count]; 
  std::cout << "\n";
  //simpleSearch(inFile); 
  std::cout << "Please enter a value to search for using simple search.\n";
  std::cin >> val;
  inFile.clear(); 
  inFile.seekg(0, ios::beg);                                                              
  while(inFile >> num)
  {
    arr[i] = num;
    i++;
    if(num == val)
    {
      found = true;
    }
  }
  if(found == true)
  {
    std::cout << "The Value was found!\n";
  }
  else
  {
    std::cout << "Sorry the value isn't here.\n";
  }
  quickSort(arr, count);
  binarySearch(arr, 0, count, val); 
  inFile.close();
}

void quickSort(int arr[], int count)
{
  int i = 0;
  int num = count;
  int temp;
  for(i = 0; i < num -1; i++ )
  { 
    for(int j = 0; j < num-1 - i; j++)
    {
      if(arr[j] > arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  std::cout << "The sorted list is: "; 
  for(i = 0; i <=num; i++)
  {
    std::cout << arr[i] << " "; 
  }
  std::cout << ".\n";
}

/*void binarySearch(int arr[], int start, int count, int val)
{
  int end = count; 
  int mid;
  if(end >= start)
  {
    mid = (start + (end - 1))/2;
    if(arr[mid] == val)
    {
      std::cout << "The binary search found the value!\n";
    }
    else if(arr[mid] > val)
    {
      binarySearch(arr, start, mid-1, val); 
    }
    else
    {
      binarySearch(arr, mid+1, end, val);
    }
  }
}*/

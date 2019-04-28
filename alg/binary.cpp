//*******************************************
//Name: Mariessa Logan
//Date 3/6/18
//Description: Holds the binary function
//******************************************
#include <iostream>

void binarySearch(int arr[], int start, int count, int val)
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
  }

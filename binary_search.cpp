//how to define the size of array in function??
//change the types of input parameters (maybe user wants to search char types of data)

#include <stdio.h>
#include <iostream>
#include <array>
using namespace std;

int
binary_search (int *arr, int searchable)
{
  int n = 100;
  int low = 0;
  int high = n;
  int mid = (high + low) / 2;
  int guess = arr[mid];

  while (low <= high)
    {
      mid = (high + low) / 2;
      guess = arr[mid];
      if (guess > searchable)
	high = mid -1 ;
      if (guess < searchable)
	low = mid + 1;
      if (guess == searchable)
	return mid;
    }
  return NULL;
}

int
main ()
{
  int n = 100;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
    {
      arr[i] = i + 1;
    }
  int index = binary_search (arr, 450);
  cout << "The index of serchable number in binary search is " << index;
  return 0;
}

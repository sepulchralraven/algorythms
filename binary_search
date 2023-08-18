#include <stdio.h>
#include <iostream>
using namespace std;

int binary_search (int searchable)
{
  int n = 10;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) 
  {
      arr[i] = i + 1;
  }
  int low = 0;
  int high = n;
  int mid = (high + low) / 2;
  int guess = arr[mid];
  
  while (guess != searchable)
    {
      if (guess > searchable)
	high = mid;
      else
	low = mid;
      mid = (high + low) / 2;
      guess = arr[mid];
    }
  return mid;
}

int main ()
{
  int index = binary_search(8);
  cout << "The index of serchable number in binary search is " << index;
  return 0;
}

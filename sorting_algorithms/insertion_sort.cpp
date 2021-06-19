#include "insertion_sort.h"

/*
    insertion_sort.cpp : This file contains the 'InsertionSort' function.
*/

void InsertionSort(int* num, int numSize)
{
    /* i divides the array into two part sorted and unsorted parts 
       going over the whole array starting at the element at index 1 
       as list with only one element is already sorted 
    */
    for (int i = 1; i < numSize; ++i)
    {
        int j = i; // j is the starting index of the unsorted array
        int temp = 0; // temperary variable to swap
        
        // sorting the first element form the unsorted part into the sorted part
        while (j > 0 && num[j] < num[j - 1])
        {
            // swapping num[j] and num[j-1]
            temp = num[j];
            num[j] = num[j - 1];
            num[j - 1] = temp;
            --j;
        }
    }
}

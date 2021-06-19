#include "selection_sort.h"

/** selection_sort.cpp : This file contains the 'SelectionSort' function.
*/
void SelectionSort(int* num, int numSize)
{
    // implementing selection sort
    // stores the index of smallest num in unsorted part of the list
    int smallestNumIndex = 0;

    for (int i = 0; i < numSize - 1; ++i)
    {
        // assigning the smallestNumIndex as the last element in sorted part which is i
        smallestNumIndex = i;

        // finding the smallest number in unsorted part
        for (int j = i; j < numSize; ++j)
        {
            // compairing the elemet at j with the smallestNumIndex
            // if element at j is small updating the smallestNumIndex
            smallestNumIndex = (num[j] < num[smallestNumIndex]) ? j : smallestNumIndex;
        }

        // swap element at smallestNumIndex with element at i
        int temp = num[smallestNumIndex]; // hold a temp value for swapping
        num[smallestNumIndex] = num[i];
        num[i] = temp;
    }

}
#include "shell_sort.h"

/*
    shell_sort.cpp : This file contains the 'ShellSort' function and its helper function
    'InsertSortInterLeaved'.
*/

void InsertSortInterLeaved(int* num, int numSize, int startIndex, int gap)
{
    /* i divides the array into two part sorted and unsorted parts going over the whole array
       and i is initalized at the next element in the smaller array as list with only one
       element is already sorted
    */
    for (int i = startIndex + gap; i < numSize; i += gap)
    {
        int j = i; // j is the starting index of the unsorted array
        int temp = 0; // temperary variable to swap

        // sorting the first element form the unsorted part into the sorted part
        while (j - gap >= startIndex && num[j] < num[j - gap])
        {
            // swapping num[j] and num[j-1]
            temp = num[j];
            num[j] = num[j - gap];
            num[j - gap] = temp;
            j -= gap;
        }

    }
}

void ShellSort(int* num, int numSize, int* gapValues, int gapSize)
{
    for (int gapIndex = 0; gapIndex < gapSize; ++gapIndex)
    {
        // getting the gap value for sorting
        int gap = gapValues[gapIndex];

        // calling the sorting algorithm
        for (int startIndex = 0; startIndex <= gap; ++startIndex)
        {
            InsertSortInterLeaved(num, numSize, startIndex, gap);
        }
    }
}
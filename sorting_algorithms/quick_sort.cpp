#include "quick_sort.h"

/*
    quick_sort.cpp : This file contains the 'QuickSort' function and its helper function
    'InsertSortInterLeaved'.
*/


int Partition(int* num, int lowIndex, int highIndex)
{
    // position of piviot
    int midPoint = lowIndex + (highIndex - lowIndex) / 2;
    // correct position of this element is searched for 
    int piviot = num[midPoint];
    bool done = false;

    while (!done)
    {
        // increment the lowIndex until element at lowIndex 
        // is higher than in piviot
        while (num[lowIndex] < piviot)
            ++lowIndex;

        // decrement the high index until element at higherIndex 
        // is lower than in piviot
        while (num[highIndex] > piviot)
            --highIndex;

        // Base Case
        // if zero or one element remain all element are partitioned
        // return highIndex
        if (lowIndex >= highIndex)
            done = true;

        else {
            // swap the element at highIndex and lowIndex
            int temp = num[highIndex];
            num[highIndex] = num[lowIndex];
            num[lowIndex] = temp;

            // update lowIndex and highIndex
            ++lowIndex;
            --highIndex;
        }
    }
    return highIndex;
}

void QuickSort(int* num, int lowIndex, int highIndex)
{
    // Base Case
    // if the partition size is 1 or zero elements, 
    // then the partition is already sorted
    if (lowIndex >= highIndex)
        return;

    // partition the data withit the array.
    // value returned from the partition function is the index of the 
    // low partition's last elemnts
    int lowEndIndex = Partition(num, lowIndex, highIndex);

    // recursivily sort low Partition from lowIndex to lowEndIndex and 
    // highPartition form lowEndIndex + 1 to highIndex
    QuickSort(num, lowIndex, lowEndIndex);
    QuickSort(num, lowEndIndex + 1, highIndex);
}
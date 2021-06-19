/*
* quick_sort.h : This file is the header for 'QuickSort' function definition and its
  helper function, 'Partition', definition.
*/

#pragma once
/** Partition divides the array into two--low partion and high partition--according to the piviot
    @param num: the array to part
    @param lowIndex: starting index of low partition
    @param highIndex: index of last element in the array
*/
int Partition(int* num, int lowIndex, int highIndex);
/** QuickSort recursivly calls Partition to partition the array with a piviot and keeps piviot in the position of the sorted list
    it does this untill all the list is sorted
    @param num: the array to part
    @param lowIndex: starting index of low partition
    @param highIndex: index of last element in the array
*/
void QuickSort(int* num, int lowIndex, int highIndex);


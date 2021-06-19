/*
* shell_sort.h : This file is the header for shell sort function.
*/

#pragma once

/** InsertSortInterLeaved is a variant of insertsort. Passed array is divided into smaller array according to the given gapSize
    and then insertSort is used in this smaller array where i divides the arrar into two part sorted and unsorted parts.
    @param num: passes the array
    @param numSize: size of the array passed
    @param startIndex: the starting index of each subdivided array
    @param gap: the gap size or how far the next element of the said smaller array is in the main array
*/
void InsertSortInterLeaved(int* num, int numSize, int startIndex, int gap);

/** ShellSort calls InsertSortLeaved with a given gapValue. The array is soted when the gap value of 1 is passed.
    It can handel the gapValues in any order but it is prefered to have it in decending order.
    further more the common values for the gap value are prefered to be (power of 2 - 1) in desending order. 
    @param num: passes the array
    @param numSize: size of the array passed
    @param gapValues: the gap size or how far the next element of the said smaller array is in the main array
    @param gapSize: number of gapValues
*/
void ShellSort(int* num, int numSize, int* gapValues, int gapSize);
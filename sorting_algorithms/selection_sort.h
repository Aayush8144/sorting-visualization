/*
* selection_sort.h : This file is the header for selection sort function. 
*/

#include <iostream>
#include "GraphElement.h"
#include <SFML/Graphics.hpp>

#pragma once



/** SelectionSortGraph function implements the selection sort algorithm
    @param GraphList: passes the graphical array
    @param const numSize: size of the array passed
*/
void SelectionSortGraph(std::vector<GraphElement> &GraphList, const int numSize, sf::RenderWindow& window);


/** SelectionSort function implements the selection sort algorithm for each element
    this also calls the draw function of the GraphElemnt which draws them to the screen
    array of int type
    @param num: passes the int array
    @param const numSize: size of the array passed

*/
void SelectionSort(int* num, const int numSize);

/** DrawGraph iterates throght the GraphElement array and calls its draw member
    function for each element in the array
    @param GraphList: passes the graphical array
    @param const numSize: size of the array passed
    @param &window: passes the window as reference

*/
void DrawGraph(std::vector<GraphElement>& GraphList, const int numSize, sf::RenderWindow& window);





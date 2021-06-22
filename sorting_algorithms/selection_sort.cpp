#include "selection_sort.h"

void SelectionSortGraph(std::vector<GraphElement>& GraphList, const int numSize, sf::RenderWindow& window)
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
            smallestNumIndex = (GraphList.at(j).GetSize().y < GraphList.at(smallestNumIndex).GetSize().y) ? j : smallestNumIndex;
        }

        // swap element at smallestNumIndex with element at i
        float temp = GraphList.at(smallestNumIndex).GetSize().y; // hold a temp value for swapping
        GraphList.at(smallestNumIndex).SetSize(GraphList.at(smallestNumIndex).GetSize().x, GraphList.at(i).GetSize().y);
        GraphList.at(i).SetSize(GraphList.at(smallestNumIndex).GetSize().x, temp);

        // drawing the graph
        DrawGraph(GraphList, numSize, window);

    }
}

/** selection_sort.cpp : This file contains the 'SelectionSort' function.
*/
void SelectionSort(int* num, const int numSize)
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

void DrawGraph(std::vector<GraphElement>& GraphList, const int numSize, sf::RenderWindow& window)
{
    // drawing graph elemet to screen
    for (int i = 0; i < numSize; ++i)
    {
        GraphList[i].Draw(window);
        
    }
}
#include "selection_sort.h"


void SelectionSortGraph(std::vector<GraphElement>& graphList, const int numSize, sf::RenderWindow& window)
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
            smallestNumIndex = (graphList.at(j).GetSize().y < graphList.at(smallestNumIndex).GetSize().y) ? j : smallestNumIndex;
        }

        GraphElement temp = graphList.at(i); 
        graphList.at(i) = graphList.at(smallestNumIndex);
        graphList.at(smallestNumIndex) = temp;

        // updating index
        graphList.at(i).SetIndex(i);
        graphList.at(smallestNumIndex).SetIndex(smallestNumIndex);

        // drawing the graph
        DrawGraph(graphList, numSize, window);
        
    }
    return;
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
    window.clear();
    // drawing graph elemet to screen
    for (int i = 0; i < numSize; ++i)
    {
        GraphList.at(i).Draw(window);
    }
    window.display();
}
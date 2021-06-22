/*
 * main.cpp : This file contains the 'main' function. Program execution begins and ends there.
 * Author: Aayush Karki
 * Created: 05/21/2021
*/

#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <stdlib.h> // for rand

#include "GraphElement.h"
#include "selection_sort.h"
/*
#include "quick_sort.h"
#include "insertion_sort.h"
#include "shell_sort.h"
*/


const float WINDOW_LENGTH = 1000;
const float WINDOW_HEIGHT = 1000;
const int NUM_SIZE = 100;
const sf::Vector2f GRAPH_00 = sf::Vector2f(WINDOW_LENGTH / 1.5, WINDOW_HEIGHT / 1.5);

/** PrintArray is an utility funtion to print the array
    @param num: passes the array
    @param numSize: size of the passed array
*/
void PrintArray(int*, int);

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_LENGTH, WINDOW_HEIGHT), "SFML works!");
    //GraphElement shape(11.0, WINDOW_LENGTH / NUM_SIZE, 5, 10);
    // shape.setFillColor(sf::Color::Green);


    int num[NUM_SIZE]; // array to be sorted
    std::vector<GraphElement> graphElementList;    // represents array as graph 

    // generating random array and assigning it to graph
    for (int i = 0; i < NUM_SIZE; ++i)
    {
        num[i] = rand() % (static_cast<int>(GRAPH_00.y)-10);
        graphElementList.push_back(GraphElement(num[i], WINDOW_LENGTH / NUM_SIZE, i, GRAPH_00.y));
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        
        /*
        // drawing graph elemet to screen
        for (int i = 0; i < NUM_SIZE; ++i)
        {
           elementList[i]->Draw(window);
        }
        */
        SelectionSortGraph(graphElementList, NUM_SIZE, window);
        
        //shape.Draw(window);
        window.display();
    }
    return 0;
}

/*
int main()
{
    const int numSize = 11;
    int num[numSize];

    // initializing random seed 
    srand(1);

    // generating random array
    for (int i = 0; i < numSize; ++i)
        num[i] = rand() % 100;

    // printing the unsorted list
    std::cout << "Unsorted list" << std::endl;
    PrintArray(num, numSize);

    // printing the sorted list
    std::cout << "Sorted list" << std::endl;
    PrintArray(num, numSize);

    return 0;
    
    //int lowIndex = 0; // starting index of low partition
    ////int highIndex = numSize -1; // index of last element in the array

    //// std::cout << Partition(num,lowIndex,highIndex) << std::endl;
    //QuickSort(num, lowIndex, highIndex);

    //int gapValues[] = { 7,5,3,1 };
    //int gapSize = sizeof(gapValues) / sizeof(numSize);
    //ShellSort(num, numSize, gapValues, gapSize);
    
}
*/

void PrintArray(int* num, int numSize)
{
    // printing each element of the array
    for (int i = 0; i < numSize; ++i)
    {
        std::cout << num[i] << " ";
    }

    std::cout << std::endl << std::endl;
}
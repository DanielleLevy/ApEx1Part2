//
// Created by Or Gabay on 21/11/2022.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

float manhattanDistance(vector <float> x,  vector <float> y ) {
    /**
     * this function gets 2 vectors in the same size and calculates their Manhattan distance
     */
    float sum = 0; // Sum the differences between the elements of the vectors
    float distance; // Calculates the difference between any two elements of any vector
    for (int i = 0; i < x.size(); i++) { // Runs over the values (elements) of each vector,
        // assuming both vectors are the same size
        distance = (abs(x[i] - y[i]));
        sum = sum + distance;
    }
    return sum;
}
/*
int main ()
{
    vector <float> x;
    vector <float> y;
    for (int i = 1; i<=3; i++)
    {
        x.push_back(i);
    }
    for (int i = 3; i>=1;i--)
    {
        y.push_back(i);
    }
    euclideanDistance(x,y);
}
 */
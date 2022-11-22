//
// Created by Or Gabay on 21/11/2022.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double manhattanDistance(vector <double> x,  vector <double> y ) {
    /**
     * this function gets 2 vectors in the same size and calculates their Manhattan distance
     */
    double sum = 0; // Sum the differences between the elements of the vectors
    double distance; // Calculates the difference between any two elements of any vector
    for (int i = 0; i < x.size(); i++) { // Runs over the values (elements) of each vector,
        // assuming both vectors are the same size
        distance = (abs(x[i] - y[i]));
        sum = sum + distance;
    }
    return sum;
}

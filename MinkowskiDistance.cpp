//
// Created by Or Gabay on 21/11/2022.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

float minkowskiDistance(vector <float> x,  vector <float> y, float p ) {
    /**
     * this function gets 2 vectors in the same size and calculates their Minkowski distance
     */
    float sum = 0; // Sum the powers of the differences between the elements of the vectors
    float distance; // Roots the difference between any two elements of any vector
    float finalAnswer; // The final result after taking the root of the sum
    for (int i = 0; i < x.size(); i++) { // Runs over the values (elements) of each vector,
        // assuming both vectors are the same size
        distance = pow((x[i] - y[i])), p);
        sum = sum + distance;
    }
    finalAnswer = pow (sum, 1.0/p);
    return finalAnswer;
}
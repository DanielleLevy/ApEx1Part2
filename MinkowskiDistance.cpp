//
// Created by Or Gabay on 21/11/2022.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double minkowskiDistance(vector <double> x,  vector <double> y ) {
    /**
     * this function gets 2 vectors in the same size and calculates their Minkowski distance
     */
    const double p=2;
    double sum = 0; // Sum the powers of the differences between the elements of the vectors
    double distance; // Roots the difference between any two elements of any vector
    double finalAnswer; // The final result after taking the root of the sum
    for (int i = 0; i < x.size(); i++) { // Runs over the values (elements) of each vector,
        // assuming both vectors are the same size
        distance = pow((x[i] - y[i]), p);
        sum = sum + distance;
    }
    finalAnswer = pow (sum, 1.0/p);
    return finalAnswer;
}
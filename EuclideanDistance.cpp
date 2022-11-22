//
// Created by Or Gabay on 20/11/2022.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double euclideanDistance(vector <double> x,  vector <double> y ) {
    /**
     * this function gets 2 vectors in the same size and calculates their Euclidean distance
     */
    double sum = 0; // Sum the squares of the differences between the elements of the vectors
    double distance; // Squares the difference between any two elements of any vector
    double finalAnswer; // The final result after taking the root of the sum
    for (int i = 0; i < x.size(); i++) { // Runs over the values (elements) of each vector,
        // assuming both vectors are the same size
        distance = pow((x[i] - y[i]), 2);
        sum = sum + distance;
    }
    finalAnswer = sqrt(sum);
    return finalAnswer;
}

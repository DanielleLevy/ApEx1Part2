//
// Created by Or Gabay on 20/11/2022.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

float euclideanDistance(vector <float> x,  vector <float> y ) {
    /**
     * this function gets 2 vectors in the same size and calculates their Euclidean distance
     */
    float sum = 0; // Sum the squares of the differences between the elements of the vectors
    float distance; // Squares the difference between any two elements of any vector
    float finalAnswer; // The final result after taking the root of the sum
    for (int i = 0; i < x.size(); i++) { // Runs over the values (elements) of each vector,
        // assuming both vectors are the same size
        distance = pow((x[i] - y[i])), 2.0);
        sum = sum + distance;
    }
    finalAnswer = sqrt(sum);
    return finalAnswer;
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
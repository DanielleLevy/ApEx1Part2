//
// Created by danie on 18/11/2022.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double canberraD(vector <double> a,  vector <double> b ){
    /**
     * the function gets 2 vector in the same size and calculates their's canberra distance
     */
    double sum=0; //to sun the distances between the element of the vectors
    double distance; // to compute the distance between the element of the vector
    for (int i=0;i<a.size();i++) // runs on the vector's elements
    {
        distance=(abs(a[i]-b[i]))/(abs(a[i])+abs(b[i]));
        sum=sum+distance ;
    }
    return sum ;
}



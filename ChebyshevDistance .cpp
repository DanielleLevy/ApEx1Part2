//
// Created by danie on 17/11/2022.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double chebyshec (vector <double> a, vector <double> b ){
    /**
      * the function gets 2 vector in the same size and calculates their's canberra distance
     */
    double max;  //use for the loop to find the maximum distance
    double distance[a.size()]; // to save the distance between the element of the vector
    for (int i=0;i<a.size();i++) // runs on the vector's elements
    {
        distance[i]=abs(a[i]-b[i]); //compute the distance between the element of the vector
    }
    max = distance[0] ; // init the max to the first distance
    for (int j=1;j<a.size();j++) //find the max distance between the vectors elements
        if (distance[j]>max)
            max=distance[j] ;
    return max ;
}

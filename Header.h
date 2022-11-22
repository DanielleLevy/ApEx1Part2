//
// Created by danie on 18/11/2022.
//

#ifndef APEX1PART2_HEADER_H
#define APEX1PART2_HEADER_H

#endif //APEX1PART2_HEADER_H

#include <iostream>
#include <vector>
using namespace std;


float chebyshec (vector <float> a, vector <float> b );
float CanberraD(vector <float> a,  vector <float> b );
float euclideanDistance(vector <float> x,  vector <float> y );
float minkowskiDistance(vector <float> x,  vector <float> y, float p );
float manhattanDistance(vector <float> x,  vector <float> y );
vector <float> CreateVector(string str, char seprate,
                            vector<float> v);
int CheckInput(vector <float> vector1, vector <float> vector2);
int main();

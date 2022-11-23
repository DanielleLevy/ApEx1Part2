//
// Created by danie on 18/11/2022.
//

#ifndef APEX1PART2_HEADER_H
#define APEX1PART2_HEADER_H

#endif //APEX1PART2_HEADER_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;


double chebyshec (vector <double> a, vector <double> b );
double canberraD(vector <double> a,  vector <double> b );
double euclideanDistance(vector <double> x,  vector <double> y );
double minkowskiDistance(vector <double> x,  vector <double> y );
double manhattanDistance(vector <double> x,  vector <double> y );
vector <double> CreateVector(string str, char seprate,
                            vector<double> v);
int CheckInput(vector <double> vector1, vector <double> vector2);
void printFun(double number);
int main();

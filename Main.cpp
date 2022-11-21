//
// Created by danie on 21/11/2022.
//
#include <vector>
#include <iostream>
#include <ctype.h>
#include "Header.h"
using namespace std;


int main(){
    vector <float> a; //init vector number one
    vector <float> b; //init vector number two
    string vectorOne; // init string to get the input
    string vectorTwo; // init string to get the input
    getline(cin,vectorOne); //get the input
    a=CreateVector(vectorOne,' ',a); //create the first vector
    getline(cin,vectorTwo);         //get the input
    b=CreateVector(vectorTwo,' ',b); //create the second vector
    CheckInput(a,b);

}

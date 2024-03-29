//
// Created by danie on 21/11/2022.
//
#include <vector>
#include <iostream>
#include <cstdlib>
#include "Header.h"
using namespace std;


int main(){
    vector <double> a; //init vector number one
    vector <double> b; //init vector number two
    string vectorOne; // init string to get the input
    string vectorTwo; // init string to get the input
    getline(cin,vectorOne); //get the input
    a=createVector(vectorOne,' ',a); //create the first vector
    getline(cin,vectorTwo);         //get the input
    b=createVector(vectorTwo,' ',b); //create the second vector
    double result; //save the result
    if(checkInput(a,b)!=-1){  //if the vectors pass the validation check , calculate:
        printFun(euclideanDistance(a,b));
        printFun(manhattanDistance(a,b));
        printFun(chebyshec (a,b));
        printFun(canberraD(a,b));
        printFun(minkowskiDistance(a,b));
    }
    else{
        cout<<"Input check failed, please try again"<<endl;
        exit(0);
    }

}

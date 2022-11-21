//
// Created by danie on 21/11/2022.
//
#include <vector>
#include <iostream>
#include <ctype.h>

using namespace std;

vector <float> CreateVector(string str, char seprate,
                             vector<float> v);
int CheckInput(vector <float> vector1, vector <float> vector2);
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

vector <float> CreateVector(string str, char seprate,
              vector<float> v) {
    string number;
    for (int i=0;i<str.size();i++){
        if(isalpha(str[i])){
            cout<<"you should insert numbers only"<<endl;
            break;

        }
        if (str[i]!=seprate){
            number=number+str[i];
        }
        else{
            v.push_back(stof(number));
            number.clear();
        }

    }
    v.push_back(stof(number));
    return v;
}

int CheckInput(vector <float> vector1, vector <float> vector2){
    if (vector1.size()!=vector2.size()){
        cout<<"you should insert 2 vectors in the same size "<<endl;
        return -1;
    }
}
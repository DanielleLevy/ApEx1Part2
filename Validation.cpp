//
// Created by danie on 21/11/2022.
//

#include <iostream>
#include <vector>
using namespace std;

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
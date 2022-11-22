//
// Created by danie on 21/11/2022.
//

#include <iostream>
#include <vector>
using namespace std;

vector <float> CreateVector(string str, char seprate,
                            vector<float> v) {
    if(str.size()==0){ //check if the str empty
        cout<<"you should insert numbers only"<<endl;
        exit(0);
    }
    string number;
    float numberAfterConv;
    for (int i=0;i<str.size();i++){
        if(isalpha(str[i]) ){
            cout<<"you should insert numbers only"<<endl;
            exit(0);

        }
        if (str[i]!=seprate){
            number=number+str[i];
        }
        else{
            try{
                numberAfterConv=stof(number);//check if the string is not nuber
            }
            catch(...){
                cout<<"you should insert numbers only"<<endl;
                exit(0);
            }
            v.push_back(numberAfterConv);
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
    if (vector1.size()==0 or vector2.size()==0){
        cout<<"vector size is 0, The vector must contain at least one number  "<<endl;
        return -1;
    }
}
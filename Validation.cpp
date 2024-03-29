//
// Created by danie on 21/11/2022.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

vector <double> createVector(string str, char seprate,
                            vector<double> v) {
    /*this function get create a vector from the input
     * input: str- the line that the user put
     *        seprate- A character that tells us how the numbers are separated
     *        v- empty vector
     * output: vector full with numbers, if the input was ok*/

    if(str.size()==0){      //check if the str empty
        cout<<"you should insert numbers only"<<endl;
        exit(0);
    }
    string number;  //holds the number until the next seprate
    double numberAfterConv;    // wiil hold the number to insert to the vector
    for (int i=0;i<str.size();i++){     // Go through each character in the string
        if(isalpha(str[i]) ){           //Checks if the character is a letter
            cout<<"you should insert numbers only"<<endl;
            exit(0);

        }
        if (str[i]!=seprate){       //Checks whether the character isn't the separator character (in this case a space)
            number=number+str[i];   //If we haven't reached the separator character, it adds the character to the number
        }
        else if(number.size()!=0 && str[i]==seprate){   //Checks whether we have reached the separator character and there is content in the number
            try{
                numberAfterConv=stod(number); //Converting a string to a number
            }
            catch(...){
                //If the conversion was not successful, it was probably not a number: prints an error and exits the program
                cout<<"error. you should insert numbers only"<<endl;
                exit(0);
            }
            v.push_back(numberAfterConv);   //If the conversion was successful, pushes the number into the vector
            number.clear(); //If the conversion was successful, pushes the number into the vector
        }
        else{
            //If we have reached a space but there is no value for the number, we will continue until there is a character that is not a space
            continue;
        }
    }
    if(number.size()!=0) {
        //If there is a last number that is not followed by a space, a check is made on it and it is inserted into the vector
        try{
            numberAfterConv=stod(number);
        }
        catch(...){
            cout<<"error. you should insert numbers only"<<endl;
            exit(0);
        }
        v.push_back(numberAfterConv);
    }
    return v;   //Returning the vector
}

int checkInput(vector <double> vector1, vector <double> vector2){
    //The function receives 2 vectors and performs input tests on them
    if (vector1.size()!=vector2.size()){
        //If the vectors are not the same size
        cout<<"you should insert 2 vectors in the same size "<<endl;
        return -1;
    }
    if (vector1.size()==0 or vector2.size()==0){
        //If the magnitude of one of the vectors is equal to 0
        cout<<"vector size is 0, The vector must contain at least one number  "<<endl;
        return -1;
    }
    return 0;
}

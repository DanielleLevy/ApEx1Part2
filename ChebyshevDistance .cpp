//
// Created by danie on 17/11/2022.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

float Chebyshec (vector <float> a,  vector <float> b ){
    float max;  //use for the loop to find the maximum distance
    float distance[a.size()];
    for (int i=0;i<a.size();i++)
    {
        distance[i]=abs(a[i]-b[i]);
    }
    max = distance[0] ;
    for (int j=1;j<a.size();j++)
        if (distance[j]>max)
            max=distance[j] ;
    return max ;
}
int main(){
    vector <float> a={1,2,3};
    vector <float> b={4,90,6};
    cout<<Chebyshec(a,b)<<endl;
}
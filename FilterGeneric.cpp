#include<iostream>
#include<vector>
#include "FilterGeneric.h"
#include<cmath>
using namespace std;


FilterGeneric :: FilterGeneric(){};

vector<int> FilterGeneric:: filter(vector<int> inputs){

    if(inputs.empty())
    {
        return result;
    }else{

        if(g(inputs[inputs.size()-1]))
        {
            result.push_back(inputs[inputs.size()-1]);
        }
        inputs.pop_back();
        return filter(inputs);

    }
    return result;
}

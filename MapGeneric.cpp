#include<iostream>
#include<vector>
#include "MapGeneric.h"
#include<cmath>
using namespace std;

MapGeneric :: MapGeneric(){};

vector<int> MapGeneric::map(vector<int> inputs){

    if(inputs.empty())
    {
        return result;
    }else{

        result.push_back(f(inputs[inputs.size()-1]));
        inputs.pop_back();
        return map(inputs);
    }

   return result; 
}

MapTriple:: MapTriple(){};

int MapTriple:: f(int x){
    return 3 * x ;
}


MapSquare:: MapSquare(){};

int MapSquare:: f(int x)
{
    return x * x;
}

MapAbsoluteValue:: MapAbsoluteValue(){};

int MapAbsoluteValue:: f(int x){

    return abs(x);
}
#include<iostream>
#include<vector>
#include "MapGeneric.h"
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

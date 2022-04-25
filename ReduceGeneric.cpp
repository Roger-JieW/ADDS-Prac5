#include<iostream>
#include<vector>
#include "ReduceGeneric.h"

using namespace std;


ReduceGeneric::ReduceGeneric(){};
int ReduceGeneric::reduce(vector<int> inputs){
    if(inputs.empty())
    {
        return result;
    }else if(inputs.size() == 1)
    {
        result = binaryOperator(result, inputs[0]);
        inputs.pop_back();
    }else{
            result = binaryOperator(inputs[inputs.size()-1],inputs[inputs.size()-2]);
            inputs.pop_back(); inputs.pop_back();
            return reduce(inputs);
    }
    return result;
}


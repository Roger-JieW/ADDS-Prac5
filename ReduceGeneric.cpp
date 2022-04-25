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



ReduceMinimum:: ReduceMinimum(){};

int ReduceMinimum:: binaryOperator(int a, int b){
    return min(a, b);
}



ReduceGCD:: ReduceGCD(){};

int ReduceGCD:: binaryOperator(int a, int b){
    int miniValue = min(a,b); int GCD = 1;

     for(int i = 1; i<= miniValue; i++)
     {
         if(a % i == 0 && b % i == 0)
         {
             GCD = i;
         }
     }
     return GCD;
}
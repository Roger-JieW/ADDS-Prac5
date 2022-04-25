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



FilterOdd:: FilterOdd(){};

bool FilterOdd:: g(int x){
    if( x % 2 == 0)
    {
        return false;
    }
    else return true;
}


FilterNonPositive:: FilterNonPositive(){};

bool FilterNonPositive:: g(int x){
    if( x >= 0)
    {
        return false;
    }
    else return true;
}



FilterForTwoDigitPositive:: FilterForTwoDigitPositive(){};

bool FilterForTwoDigitPositive:: g(int x){
    
    if(x <= 99 && x >=10)
    {
     return true;
    }
     else return false;


}
#include<iostream>
#include<vector>
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"

using namespace std;

FilterForTwoDigitPositive:: FilterForTwoDigitPositive(){};

bool FilterForTwoDigitPositive:: g(int x){
    
    if(x <= 99 && x >=10)
    {
     return true;
    }
     else return false;

}
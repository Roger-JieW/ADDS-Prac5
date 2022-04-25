#include<iostream>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"

using namespace std;


MapAbsoluteValue:: MapAbsoluteValue(){};

int MapAbsoluteValue:: f(int x){

    return abs(x);
}
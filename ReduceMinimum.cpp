#include<iostream>
#include<vector>
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"

using namespace std;

ReduceMinimum:: ReduceMinimum(){};

int ReduceMinimum:: binaryOperator(int a, int b){
    return min(a, b);
}

#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>
using namespace std;
class ReduceGeneric{

    virtual int binaryOperator(int, int) = 0;

    public: 
    ReduceGeneric();
    int reduce(vector<int>);
    int result;


};


#endif
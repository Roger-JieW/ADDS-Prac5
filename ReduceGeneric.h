#ifndef REDUCE_H
#define REDUCE_H
#include<vector>
using namespace std;
class ReduceGeneric{

    virtual int binaryOperator(int, int) = 0;

    public: 
    ReduceGeneric();
    int reduce(vector<int>);
    int result;


};

class ReduceMinimum : public ReduceGeneric {

public:
ReduceMinimum();
int binaryOperator(int, int);

};

class ReduceGCD : public ReduceGeneric{
public: 
ReduceGCD();
int binaryOperator(int, int);

};

















#endif
#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include<vector>
using namespace std;

class FilterGeneric{

    virtual bool g(int) = 0;

    public: 
    FilterGeneric();
    vector<int> filter(vector<int>);
    vector<int> result;


};



#endif
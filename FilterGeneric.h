#ifndef FILTER_H
#define FILTER_H
#include<vector>
using namespace std;
class FilterGeneric{

    virtual bool g(int) = 0;

    public: 
    FilterGeneric();
    vector<int> filter(vector<int>);
    vector<int> result;


};

class FilterOdd : public FilterGeneric {

public:
FilterOdd();
bool g(int);

};

class FilterNonPositive : public FilterGeneric{
public: 
FilterNonPositive();
bool g(int);

};

class FilterForTwoDigitPositive : public FilterGeneric{
public:   
FilterForTwoDigitPositive();
bool g(int);
};

















#endif
#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include <vector>
#include "FilterGeneric.h"

using namespace std;

class FilterNonPositive : public FilterGeneric{
public: 
FilterNonPositive();
bool g(int);

};

#endif
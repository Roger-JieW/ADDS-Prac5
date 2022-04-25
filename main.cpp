#include<iostream>
#include<vector>
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "MapGeneric.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

using namespace std; 



int main()
{
    vector<int> myVect; 
    vector<int> temp;
    vector<int> L1;
    int temp0;

    while(cin>> temp0)
    {
        myVect.push_back(temp0);
        if (cin.get() == '\n')break;
    }
    
    MapTriple *triple = new MapTriple();
    MapAbsoluteValue *absolute = new MapAbsoluteValue();

    temp = triple->map(myVect);
    L1 = absolute->map(temp);

    FilterOdd *odd = new FilterOdd();
    FilterForTwoDigitPositive *twoDigits = new FilterForTwoDigitPositive();
    vector<int> temp2;
    vector<int> L11;

    temp2 = odd->filter(L1);
    L11 = twoDigits->filter(temp2);

    ReduceMinimum *minimum = new ReduceMinimum();
    ReduceGCD *gcd = new ReduceGCD();
    
    int L11left;
    int L11right;

    L11left = minimum->reduce(L11);
    L11right = gcd->reduce(L11);

    cout<<L11left<< " "<<L11right<<endl;
    return 0;
}

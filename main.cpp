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

    int myArray[] = {6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189};
    for(int i = 0; i<20; i++)
    {
        myVect.push_back(myArray[i]);
    }
    

    MapTriple *triple = new MapTriple();
    MapAbsoluteValue *absolute = new MapAbsoluteValue();

    temp = triple->map(myVect);
    L1 = absolute->map(temp);
    // for(int i = 0; i<L1.size(); i++)
    // {
    //     cout<<L1[i]<<" ";
    // }
    //cout<<endl;
    FilterOdd *odd = new FilterOdd();
    FilterForTwoDigitPositive *twoDigits = new FilterForTwoDigitPositive();
    vector<int> temp2;
    vector<int> L11;

    temp2 = odd->filter(L1);
    L11 = twoDigits->filter(temp2);

    // for(int i = 0; i<L11.size(); i++)
    // {
    //     cout<<L11[i]<<" ";
    // }

    ReduceMinimum *minimum = new ReduceMinimum();
    ReduceGCD *gcd = new ReduceGCD();
    
    int L11left;
    int L11right;

    L11left = minimum->reduce(L11);
    L11right = gcd->reduce(L11);

    cout<<L11left<< " "<<L11right<<endl;
    return 0;
}

#include<iostream>
#include<vector>
//#include "ReduceGeneric.h"
#include "ReduceGCD.h"

using namespace std;

ReduceGCD:: ReduceGCD(){};

int ReduceGCD:: binaryOperator(int a, int b){
    int miniValue = min(a,b); int GCD = 1;

     for(int i = 1; i<= miniValue; i++)
     {
         if(a % i == 0 && b % i == 0)
         {
             GCD = i;
         }
     }
     return GCD;
}
#ifndef MAP_H
#define MAP_H
#include<vector>
using namespace std;
class MapGeneric{

    virtual int f(int) = 0;

    public: 
    MapGeneric();
    vector<int> map(vector<int>);
    vector<int> result;


};

class MapTriple : public MapGeneric {

public:
MapTriple();
int f(int);

};

class MapSquare : public MapGeneric{
public: 
MapSquare();
int f(int);

};

class MapAbsoluteValue : public MapGeneric{
public:   
MapAbsoluteValue();
int f(int);
};

















#endif
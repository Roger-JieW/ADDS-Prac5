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



#endif
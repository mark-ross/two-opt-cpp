#ifndef __SOLUTION__H__
#define __SOLUTION__H__

#include <vector>

#include "Point.hpp"

class Solution {

public:
    virtual void setup(vector<Point*>) = 0;
    virtual void execute() = 0;

};

#endif // __SOLUTION__H__

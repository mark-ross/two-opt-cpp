#ifndef __POINT__H__
#define __POINT__H__

#include <string>
using std::string;

class Point {
public:
    int label;
    float x;
    float y;
    float z;

    Point(int l, float a, float b, float c = 0):
        label(l), x(a), y(b), z(c) {}

};

#endif  // __POINT__H__

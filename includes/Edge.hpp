#ifndef __EDGE__H__
#define __EDGE__H__

#include "Point.hpp"

class Edge {
public:
    Point a;
    Point b;

    Edge(Point p1, Point p2): a(p1), b(p2){}

};

#endif  // __EDGE__H__

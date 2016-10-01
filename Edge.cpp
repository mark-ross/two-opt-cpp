#include "Point.cpp"

class Edge {
public:
    Point a;
    Point b;

    Edge(Point p1, Point p2) {
        a = p1;
        b = p2;
    }
};

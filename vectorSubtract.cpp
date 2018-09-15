#include <iostream>

//a class that repseents Vectos

class Vector
{
public:
    float x,y;
};
//A class that will repesent the points
class Point
{
public:
    Point AddVector(Vector v);

    float x,y;
};

Vector operator-(Point a, Point b)
{
    Vector v;
    v.x = a.x - b.x;
    v.y = a.y - b.y;

    return v;
}

//Point class function that will add the Vector points
Point Point::AddVector(Vector v)
{
    Point p2;
    p2.x = x+ v.x;
    p2.y = y + v.y;

    return p2;
}
using namespace std;

int main(int argc, char** args)
{
    //point of pac-man
    Point p; //(1,0)
    p.x = 1;
    p.y = 0;
    //point of iggy the blue ghost
    Point i;
    i.x = 1;
    i.y = 1;

    //Vector variable creation
    Vector v;
    v.x= 0;
    v.y = 0;

    v = p - i;

    cout << "Result:(" << v.x << " , " << v.y << ")\n";
    return 0;
}

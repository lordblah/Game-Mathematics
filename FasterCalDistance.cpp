#include <iostream>
#include <math.h>

//a class that represents Vectos

class Vector
{
public:
    float Length() const;
    float LengthSqr()const;
    float x,y;
};
//A class that will represent the points
class Point
{
public:
    Point AddVector(Vector v);

    float x,y;
};

//This function will get the length of a vector by squaring
//the points associated with that vector
float Vector::Length()const
{
    float length;
    length = sqrt(x*x + y*y);
    return length;
}
//A faster way of calculating distance bewtween two objects
float Vector::LengthSqr()const
{
    float length;
    length = (x*x + y*y);
    return length;
}
//An overloader used to subtract two vector points.
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
    //Pac-man position
    Point p; //(1,0)
    p.x = 0;
    p.y = -1;
    //ghost position
    Point i;
    i.x = 1;
    i.y = 1;

    //another ghost position
    Point c;
    c.x = 2;
    c.y = -1;


    //Vector variable creation
    Vector cp;
    Vector ip;

    cp= p - c;
    ip = p - i;


    float length_sqrt_cp  = cp.LengthSqr();
    float length_sqrt_ip  = ip.LengthSqr();

    cout << " length_sqrt_cp:" << length_sqrt_cp <<  "\n";
    cout << "length_sqrt_ip:" << length_sqrt_ip << "\n";
    return 0;
}

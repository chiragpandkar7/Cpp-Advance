#include "../headers/Triangle.h"
#include "../headers/Point3D.h"

// Implementation of Triangle class
Triangle::Triangle(Point3D p1, Point3D p2, Point3D p3)
:mP1(0,0,0),
mP2(0,0,0),
mP3(0,0,0)
{
    mP1=p1;
    mP2=p2;
    mP3=p3;
}

Triangle::~Triangle()
{
}

// Getters of points p1, p2, p3 of the triangle
Point3D Triangle::p1()
{
    return mP1;
}

Point3D Triangle::p2()
{
    return mP2;
}

Point3D Triangle::p3()
{
    return mP3;
}
//////////////////////////////////////////////////////////////////////////////
//
// Character Movement - Subtracting Vectors
// 
// 

#include <iostream>

class Vector
{
public:
	float x, y;
};


class Point
{
public:
	Point AddVector(Vector v);

	float x, y;
};

Vector operator-(Point a, Point b) /// this function will only work when we subtract two "Points"
{
	Vector v;

	v.x = a.x - b.x;
	v.y = a.y - b.y;

	return v;
}

Point Point::AddVector(Vector v)
{
	Point p2;

	p2.x = x + v.x;
	p2.y = y + v.y;

	return p2;
}

int main(int argc, char** args)
{
	Point p; // (0. -1)
	p.x = 1;
	p.y = 0;

	Point i; // (1, 1)
	i.x = 2;
	i.y = 3;

	Vector v;

	v = p - i;

	std::cout << "Result: (" << v.x << ", " << v.y << ")\n";

	return 0;
}
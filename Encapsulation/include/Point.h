#ifndef POINT_H
#define POINT_H

#include <string>

class Point
{
public:
	Point(float x, float y, float z);
	~Point() = default;
	float x;
	float y;
	float z;

	std::string toString() const;
};

#endif


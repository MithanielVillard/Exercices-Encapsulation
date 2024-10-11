#include "../include/Point.h"
#include <sstream>

Point::Point(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

std::string Point::toString() const
{
	std::stringstream stream;
	stream << " x: " << x << " y: " << y << " z: " << z;

	return stream.str();
}

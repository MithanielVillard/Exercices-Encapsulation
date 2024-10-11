#include "../include/Vector2.h"
#include <corecrt_math.h>

Vector2::Vector2() : m_x(0.0f), m_y(0.0f) {};

const Vector2 Vector2::Zero(.0f, .0f);
const Vector2 Vector2::One(1.0f, 1.0f);

float Vector2::getMagnitude() {
	return sqrtf(m_x * m_x + m_y * m_y);
}

Vector2 Vector2::operator+(const Vector2& _right) {
	return Vector2(m_x + _right.m_x, m_y + _right.m_y);
}

void Vector2::operator+=(const Vector2& _right) {
	m_x += _right.m_x;
	m_y += _right.m_y;
}

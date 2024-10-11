#pragma once

class Vector2
{
public:
	Vector2();
	Vector2(float x, float y) : m_x(x), m_y(y) {};
	~Vector2() = default;

	void setX(float x) { m_x = x; }
	void setY(float y) { m_y = y; }

	float getX() const { return m_x; }
	float getY() const { return m_y; }
	float getMagnitude();

	static const Vector2 Zero;
	static const Vector2 One;

	Vector2 operator+(const Vector2& _right);
	void operator+=(const Vector2& _right);
private:
	float m_x;
	float m_y;
};
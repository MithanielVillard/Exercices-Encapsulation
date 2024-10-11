#pragma once

#include "Vector2.h"

class AMovable
{
public:
	AMovable();
	AMovable(const Vector2& pDir, float speed);
	virtual ~AMovable() = default;

	virtual void setDir(const Vector2& pDir);
	virtual void setSpeed(float speed);
	virtual void Move() = 0;
protected:
	Vector2 m_dir;
	float m_speed;
};


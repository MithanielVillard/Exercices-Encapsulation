#pragma once
#include "../include/Entity.h"

class Vector2;

class StaticObject : public Entity
{
public:
	StaticObject();
	StaticObject(float x, float y);
	StaticObject(const Vector2& pos);
	~StaticObject() override = default;

private:
	void logPosition() const;
};


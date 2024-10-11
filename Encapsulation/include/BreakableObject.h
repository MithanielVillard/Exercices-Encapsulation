#pragma once
#include "../include/StaticObject.h"
#include "../include/Alive.h"

class Vector2;

class BreakableObject : public StaticObject, public Alive
{
public :
	BreakableObject();
	BreakableObject(const Vector2& pos, float maxHealth, float currentHealth);
	BreakableObject(const Vector2& pos, float maxHealth);
	BreakableObject(float x, float y, float maxHealth, float currentHealth);
	BreakableObject(float x, float y, float maxHealth);
	void Die() override;
	~BreakableObject() = default;
private:
	void logPosition() const;
};


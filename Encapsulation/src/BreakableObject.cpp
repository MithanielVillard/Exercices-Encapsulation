#include "../include/BreakableObject.h"
#include "../include/Vector2.h"
#include "../include/World.h"
#include <iostream>

BreakableObject::BreakableObject() : StaticObject(), Alive(.0f) { logPosition(); };
BreakableObject::BreakableObject(const Vector2& pos, float maxHealth, float currentHealth) : StaticObject(pos), Alive(maxHealth, currentHealth) { logPosition(); }
BreakableObject::BreakableObject(const Vector2& pos, float maxHealth) : StaticObject(pos), Alive(maxHealth) { logPosition(); }
BreakableObject::BreakableObject(float x, float y, float maxHealth, float currentHealth) : StaticObject(x, y), Alive(maxHealth, currentHealth) { logPosition(); }
BreakableObject::BreakableObject(float x, float y, float maxHealth) : StaticObject(x, y), Alive(maxHealth) { logPosition(); }

void BreakableObject::Die() {
	m_world->deleteEntity(this);
	std::cout << "Breakable object died" << '\n';
}

void BreakableObject::logPosition() const
{
	std::cout << "Breakable Object created at x:" << m_pos.getX() << " y:" << m_pos.getY() << '\n';
}
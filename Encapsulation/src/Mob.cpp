#include "../include/Mob.h"
#include "../include/Vector2.h"
#include "../include/AMovable.h"
#include "../include/BreakableObject.h"
#include "../include/World.h"
#include <iostream>

Mob::Mob(float x, float y, const Vector2& dir, float maxHealth) : Entity(x, y), Alive(maxHealth), AMovable(dir, 1.0f) { logPosition(); };
Mob::Mob(const Vector2& pos, const Vector2& dir, float maxHealth) : Entity(pos), Alive(maxHealth), AMovable(dir, 1.0f) { logPosition(); };

void Mob::takeDamage(const float damage) {
	Alive::takeDamage(damage);
	std::cout << "Mob took damage" << '\n';
}

void Mob::Move() {
	BreakableObject* bo = m_world->getEntityOfType<BreakableObject>();
	MoveToward(bo);
	std::cout << "Mob moved to x:" << m_pos.getX() << " y:" << m_pos.getY() << '\n';
}

void Mob::Die() {
	std::cout << "Mob Died" << '\n';
	m_world->deleteEntity(this);
}

void Mob::logPosition() const {
	std::cout << "Mob created at x:" << m_pos.getX() << " y:" << m_pos.getY() << '\n';
}
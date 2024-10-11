#include "../include/Entity.h"
#include "../include/Vector2.h"
#include "../include/World.h"

Entity::Entity() : m_pos(Vector2(0.0f, 0.0f)), m_world(nullptr) {};
Entity::Entity(const Vector2& pos) : m_pos(pos), m_world(nullptr) {};
Entity::Entity(float x, float y) : m_pos(Vector2(x, y)), m_world(nullptr) {}

void Entity::setWorld(World& world) {
	m_world = &world;
}

void Entity::setPos(Vector2& pos) {
	m_pos = pos;
}

Vector2& Entity::getPos() {
	return m_pos;
}

void Entity::MoveToward(Entity* e) {
	Vector2 dir = Vector2(e->getPos().getX() - m_pos.getX(), e->getPos().getY() - m_pos.getY());
	float magnitude = dir.getMagnitude();
	Vector2 normalized = magnitude > 0 ? Vector2(dir.getX()/ magnitude, dir.getY() / magnitude) : Vector2(0.0f, 0.0f);

	m_pos += normalized;
}

float Entity::getDistance(Entity* e) {
	Vector2 distance = Vector2(e->getPos().getX() - m_pos.getX(), e->getPos().getY() - m_pos.getY());
	return distance.getMagnitude();
}
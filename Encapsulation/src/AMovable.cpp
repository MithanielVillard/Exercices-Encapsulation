#include "../include/AMovable.h"
#include "../include/Vector2.h"

AMovable::AMovable() : m_dir(0.0f, 0.0f), m_speed(0.0f) {}
AMovable::AMovable(const Vector2& dir, float speed) : m_dir(dir), m_speed(speed) {};

void AMovable::setSpeed(float speed) {
	m_speed = speed;
}

void AMovable::setDir(const Vector2& dir) {
	m_dir = dir;
}
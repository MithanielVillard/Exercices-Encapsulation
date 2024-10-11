#include "../include/StaticObject.h"
#include "../include/Vector2.h"
#include <iostream>

StaticObject::StaticObject() : Entity() {}

StaticObject::StaticObject(float x, float y) : Entity(x, y) { logPosition(); }

StaticObject::StaticObject(const Vector2& pos) : Entity(pos) { logPosition(); }

void StaticObject::logPosition() const {
	std::cout << "Static object created at x : " << m_pos.getX() << " y : " << m_pos.getY() << '\n';
}

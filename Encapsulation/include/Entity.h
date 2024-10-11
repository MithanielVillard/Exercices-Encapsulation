#pragma once
#include "Vector2.h"

class World;

class Entity
{
public:
	Entity();
	explicit Entity(const Vector2& pos);
	Entity(const float x, const float y);
	virtual ~Entity() = default;

	void setWorld(World& world);
	void setPos(Vector2& pos);
	Vector2& getPos();

	void MoveToward(Entity* e);
	float getDistance(Entity* e);
protected:
	Vector2 m_pos;
	World* m_world;
};
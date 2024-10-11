#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable
{
public:
	Mob(float x, float y, const Vector2& dir, float maxHealth);
	Mob(const Vector2& pos, const Vector2& dir, float maxHealth);
	~Mob() override = default;

	void takeDamage(float damage) override;
	void Move() override;
	void Die() override;
private :
	void logPosition() const;
};


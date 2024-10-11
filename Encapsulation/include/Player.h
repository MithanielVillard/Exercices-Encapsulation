#ifndef PLAYER_H
#define PLAYER_H

#include "../include/Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include "Vector2.h"

namespace Game {

	class Player : public Entity, public Alive, public AMovable, public IAttacker
	{
	public:
		Player(const Vector2& pos, const Vector2& dir, float maxHealth, float health);
		Player(float x, float y, const Vector2& dir, float maxHealth, float health);
		~Player() override = default;

		void takeDamage(const float damage) override;
		void Move() override;
		void Attack(Alive* target, float damage) override;
		void Die() override;
	private:
		const float c_damage = 10.0f;
		const float c_speed = 1.0f;

		void logPosition() const;
	};
}


#endif // !PLAYER_H

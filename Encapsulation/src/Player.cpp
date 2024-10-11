#include <iostream>
#include "../include/Player.h"
#include "../include/Vector2.h"
#include "../include/Mob.h"
#include "../include/World.h"
#include "../include/BreakableObject.h"

using Game::Player;

Player::Player(const Vector2& pos, const Vector2& dir, const float maxHealth, const float health) : 
	Entity(pos), 
	AMovable(dir, c_speed), 
	Alive(maxHealth, health) {
	logPosition();
}

Player::Player(const float x, const float y, const Vector2& dir, const float maxHealth, const float health) :
	Entity(x, y),
	AMovable(dir, c_speed),
	Alive(maxHealth, health) {
	logPosition();
}

void Player::takeDamage(const float damage) {
	Alive::takeDamage(damage);
	std::cout << "Player took :" << damage << " damages !";
}

void Player::Move() {
	Mob* mob = m_world->getEntityOfType<Mob>();
	BreakableObject* bo = m_world->getEntityOfType<BreakableObject>();

	if (mob != nullptr && mob->getHealth() > 0) {
		MoveToward(mob);
		std::cout << "Player Moved to x:" << m_pos.getX() << " y:" << m_pos.getY() << '\n';
		if (getDistance(mob) <= 1)
			Attack(mob, c_damage);
	} else if (bo != nullptr) {
		MoveToward(bo);
		std::cout << "Player Moved to x:" << m_pos.getX() << " y:" << m_pos.getY() << '\n';
		if (getDistance(bo) <= 1)
			Attack(bo, 1);
	}
}

void Player::Die() {
	m_world->deleteEntity(this);
}

void Player::Attack(Alive* target, const float damage) {
	target->takeDamage(damage);
	std::cout << "Player caused " << damage << " damages to : " << target << '\n';
}

void Player::logPosition() const {
	std::cout << "Player created at x : " << m_pos.getX() << " y : " << m_pos.getY() << '\n';
}

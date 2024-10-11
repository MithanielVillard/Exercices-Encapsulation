#pragma once

class Alive;

class IAttacker {
public:
	virtual void Attack(Alive* target, float damage) = 0;
};
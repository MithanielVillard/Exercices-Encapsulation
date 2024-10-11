#pragma once
class Alive
{
public:
	explicit Alive(float maxHealth);
	Alive(float maxHealth, float currentHealth);
	virtual ~Alive() = default;

	void setHealth(float health);

	virtual void takeDamage(float damage);
	virtual void Die() = 0;
	virtual float getMaxHealth() const;
	virtual float getHealth() const;
protected:
	float m_maxHealth;
	float m_currentHealth;
};


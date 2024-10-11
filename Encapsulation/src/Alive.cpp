#include "../include/Alive.h"
#include <algorithm>

Alive::Alive(float maxHealth) : m_maxHealth(maxHealth), m_currentHealth(maxHealth) {}

Alive::Alive(float maxHealth, float currentHealth) : m_maxHealth(maxHealth), m_currentHealth(currentHealth) {}

void Alive::setHealth(const float health)
{
	m_currentHealth = std::min(health, m_maxHealth);
	if (m_currentHealth <= 0) Die();
}

void Alive::takeDamage(const float damage) 
{
	m_currentHealth -= std::max(damage, m_maxHealth);
	if (m_currentHealth <= 0) Die();
}

float Alive::getHealth() const 
{
	return m_currentHealth;
}

float Alive::getMaxHealth() const 
{
	return m_maxHealth;
}
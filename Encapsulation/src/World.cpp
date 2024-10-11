#include "../include/World.h"
#include "../include/Entity.h"
#include "../include/StaticObject.h"
#include "../include/BreakableObject.h"
#include "../include/Vector2.h"
#include "../include/Mob.h"
#include "../include/Player.h"

World::World() : m_entities({}) {};

void World::Init() {

	StaticObject* so = new StaticObject(10.0f, 10.0f);
	BreakableObject* bo = new BreakableObject(Vector2(20.0f, 20.0f), 1);
	Mob* mob = new Mob(Vector2(5.0f, 0.5f), Vector2::One, 20.0f);
	Game::Player* player = new Game::Player(Vector2(20.0f, 10.0f), Vector2::One, 100.0f, 100.0f);

	so->setWorld(*this);
	bo->setWorld(*this);
	mob->setWorld(*this);
	player->setWorld(*this);

	m_entities.push_back(so);
	m_entities.push_back(bo);
	m_entities.push_back(mob);
	m_entities.push_back(player);
}

void World::Step() {
	for (Entity* e : m_entities)
	{
		AMovable* movable = dynamic_cast<AMovable*>(e);
		if (movable) movable->Move();
	}
}

void World::deleteEntity(Entity* e) {
	auto ent = std::find(m_entities.begin(), m_entities.end(), e);
	m_entities.erase(ent);
	delete e;
}
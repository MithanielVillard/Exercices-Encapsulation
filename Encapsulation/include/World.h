#pragma once
#include <vector>

class Entity;

class World
{
public:
	World();
	~World() = default;
	void Init();
	void Step();

	template<typename T>
	T* getEntityOfType();
	void deleteEntity(Entity* entity);
private:
	std::vector<Entity*> m_entities;
};


template<typename T>
T* World::getEntityOfType() {
	for (auto* ent : m_entities) {
		T* out = dynamic_cast<T*>(ent);
		if (out != nullptr) return out;
	}
	return nullptr;
}
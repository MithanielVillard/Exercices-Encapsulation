#include "include/BreakableObject.h"
#include "include/StaticObject.h"
#include "include/Mob.h";
#include "include/Player.h"
#include "include/Vector2.h"
#include "include/World.h" 
#include <iostream>

int main()
{ 
	World w;
	w.Init();
	for (int i = 0; i < 200; i++)
		w.Step(); 
;}

#include "pch.h"
#include "Room.h"


Room::Room(string name)
{
	this->name = name;
}

void Room::addThing(Thing t) {
	include.push_back(t);
}


#pragma once
#include "Character.h"

class HandleToCharacter
{
public:
	HandleToCharacter() : character(new Character()) {}
	Character* operator->()
	{
		return character; // overloaded ->
	}
private:
	Character* character;
};
// BridgeRefined.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DrawImpl.h"
#include "Player.h"
#include <iostream>


int main()
{
	DrawAPI* api = new DrawImpl();
	Character* character = new Player(api);
	character->Draw();
	std::cin.get();

	system("Pause");
}


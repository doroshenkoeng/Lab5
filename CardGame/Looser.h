#pragma once
#include "Player.h"
//! Класс лузера.
class Looser :
	public Player
{
public:
	//! Перегрузка унарного оператора - инкремент.
	void operator ++();
};


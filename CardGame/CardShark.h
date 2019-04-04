#pragma once
#include "Looser.h"
//! Класс шуллера.
class CardShark :
	public Player
{
public:
	//! Метод, увеличивающий баллы шуллера на 2 с вероятностью 10%.
	void operator ++();
	int operator <(Looser player);
};


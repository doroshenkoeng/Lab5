#include <iostream>
#include "CardGame.h"
#include "CardShark.h"
#include "Looser.h"
#include "Exception.h"

/*!
	\mainpage Лабораторная работа №5
	\section taskname Обработка ошибочных ситуаций. Исключения

	\author Дорошенко Сергей Э-23
	\version 
	\date Апрель, 2019
	\warning 18+
	\copyright Все права защищены.
	\todo В недалеком будущем в игру будет включена система доната разработчику.

	\subsection goal Цель работы:

	Изучить механизмы, способы вызова и обработки исключений языка С++.
	\subsection variant Вариант 10
	
	Использовать исключение для обработки ошибочной ситуации в методе setCardsNumber().
*/
int main() {
	try
	{
		CardShark player1;
		Looser player2;
		player1.setCardsNumber(-1);
		CardGame game(player1, player2);
		game.startGame();
		int result = game.getResult();
		if (result == 1)
		{
			std::cout << "First player won!";
		}
		else if (result == 2)
		{
			std::cout << "Second player won!";
		}		
		else std::cout << "Nobody won!";
	}
	catch (Exception & e)
	{
		std::cout << e.getExceptionName();
	}

	return 0;
}
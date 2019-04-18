#include <iostream>
#include "CardGame.h"
#include "CardShark.h"
#include "Looser.h"
#include "Exception.h"

/*!
	\mainpage Лабораторная работа №6
	\section taskname STL. Структуры данных
	\author Дорошенко Сергей Э-23
	\version 
	\date Апрель, 2019
	\warning 18+
	\copyright Все права защищены.
	\todo В недалеком будущем в игру будет включена система доната разработчику.

	\subsection goal Цель работы:

	Научиться использовать структуры данных и алгоритмы стандартной библиотеки шаблонов.
	\subsection variant Вариант 10
	
	В класс CardGame, добавить контейнер вектор, хранящий все игры проведенные между двумя игроками. 
	Добавить метод сортировки контейнера по возрастанию количества побед первого игрока.*/
int main() {
	try
	{
		int n = 3;
		std::vector<CardShark> player1(n);
		std::vector<Looser> player2(n);
		CardGame game(player1, player2);
		game.startChampionship();
		game.sortResultTable();
		std::cout << game.toString();
	}
	catch (Exception & e)
	{
		std::cout << e.getExceptionName();
	}

	return 0;
}
﻿#pragma once
#include <vector>
#include <random>
#include "Exception.h"
//! Класс игрока
class Player
{
public:
	//! Метод для инкрементирования количества баллов игрока.
	void increment();
	//! Метод возвращающий карту из колоды игрока.
	/*!
		\return карту из колоды.
	*/
	int getCard();
	//! Геттер возвращающий текущее количество баллов игрока.
	/*!
		\return текущее значение баллов игрока.
	*/
	int getCurrentScore();
	//! Использовать супер-способность или нет?
	/*!
		\param moveNumber Номер хода.
		\return Текущее значение баллов игрока.
	*/
	bool isSuperSkillTimeCame(int moveNumber);
	//! Геттер количества карт в колоде.
	/*!
		\return количество карт в колоде.
	*/
	int getCardsNumber();
	//! Конструктор, в котором генерируется колода.
	Player();
	//! Геттер поля mSuperSkillMoveNumber.
	/*!
		return номер хода, на котором используется способность.
	*/
	int getSuperSkillMoveNumber();
	//! Виртуальный метод перегрузки унарного префиксного оператора.
	virtual void operator ++() =0;
	//! Перегрущка бинарного оператора.
	/*!
		\retval 1: Если кол-во баллов первого больше.
		\retval 2: Если кол-во баллов второго больше.
		\retval 0: Если кол-во баллов одинаково.
	*/
	int operator < (Player *player);
	//! Сеттер кол-ва карт в колоде.
	/*!
		\param cardsNumber Кол-во карт в колоде.
	*/
	void setCardsNumber(int cardsNumber);
private:
	//! Колода карт
	std::vector<int> mDeck;
	//! Число карт в колоде.
	int mCardsNumber;
	//! Текущее количество баллов игрока.
	int mCurrentScore;
	//! Номер хода на котором игрок использует супер-способность
	int mSuperSkillMoveNumber;
};


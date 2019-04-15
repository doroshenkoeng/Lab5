#pragma once
#include "Player.h"
#include "CardShark.h"
#include "Looser.h"

//! Класс игры
class CardGame
{

public:
	//! Конструктор с параметрами.
	/*!
		\param player1 объект класса Player - игрок 1.
		\param player2 объект класса Player - игрок 2.
	*/
	CardGame(CardShark & player1, Looser & player2);
	//! Конструктор с параметрами.
	/*!
		\param players1 вектор объектов класса CardShark.
		\param players2 вектор объектов класса Looser.
	*/
	CardGame(std::vector<CardShark> &players1, std::vector<Looser> &players2);
	//! Метод, в котором симулируется игра.
	void startGame();
	//! Метод, в котором симулируется чемпионат.
	void startChampionship();
	
	//! Метод возвращающий результат игры.
	/*!
		\retval 1: выигрыш 1-го игрока;
		\retval 2: выигрыш 2-го игрока;
		\retval 0: ничья.
	*/
	int getResult();
	//! Метод сортировки таблицы результатов.
	void sortResultTable();
	//! Геттер контейнера таблмцы результатов.
	/*!
		\param i Индекс игрока в таблице результатов.
	*/
	int getResultTable(int i);
private:
	//! Количество карт в колоде.
	int mCardsNumber;
	//! Кол-во игроков одного типа (шуллеров или лузеров).
	int mPlayersNumber;
	//! Указатель на  объект класса CardShark.
	CardShark mPlayer1;
	//! Указатель на  объект класса Looser.
	Looser mPlayer2;
	//! Вектор шуллеров.
	std::vector<CardShark> mPlayers1;
	//! Вектор лузеров.
	std::vector<Looser> mPlayers2;
	//! Вектор таблицы результатов чемпионата. 
	std::vector<int> mResultTable;

};


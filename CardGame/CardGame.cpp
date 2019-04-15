#include "CardGame.h"

CardGame::CardGame(CardShark & player1, Looser & player2)
{
	mPlayer1 = player1;
	mPlayer2 = player2;
	mCardsNumber = player1.getCardsNumber();
}

CardGame::CardGame(std::vector<CardShark>& players1, std::vector<Looser>& players2)
{
	mPlayers1 = players1;
	mPlayers2 = players2;
	mResultTable.resize(2 * players1.size());
	mPlayersNumber = players1.size();
}

void CardGame::startGame()
{
	for (int i = 0; i < mCardsNumber; i++) {
		int card1 = mPlayer1.getCard();
		int card2 = mPlayer2.getCard();
		if (mPlayer1.isSuperSkillTimeCame(i)) card1 = 5;
		if (mPlayer2.isSuperSkillTimeCame(i)) card2 = 5;
		if (card1 > card2) {
			++mPlayer1;
		}
		else if (card1 < card2) {
			++mPlayer2;
		}
	}
}

void CardGame::startChampionship()
{
	for (int i = 0; i < mPlayersNumber; i++)
	{
		for (int j = mPlayersNumber; j < 2* mPlayersNumber; j++)
		{
			CardGame game(mPlayers1[i], mPlayers2[j- mPlayersNumber]);
			game.startGame();
			if (game.getResult()==1)
			{
				mResultTable[i]++;
				if (mResultTable[j] > 0) mResultTable[j]--;
			}
			else if (game.getResult() == 2)
			{
				mResultTable[j]++;
				if (mResultTable[i] > 0) mResultTable[i]--;
			}
		}

	}
}

int CardGame::getResult()
{
	return mPlayer1 < mPlayer2;
}

void CardGame::sortResultTable()
{
	std::sort(mResultTable.begin(), mResultTable.end(), std::greater<>());
}

int CardGame::getResultTable(int i)
{
	return mResultTable[i];
}



//
//  TicTacToe.h
//  Game
//
//  Created by Kafle D. Manish on 13/5/18.
//  Copyright © 2018 Kafle D. Manish. All rights reserved.
//


#pragma once

#include <string>


using namespace std;

class Points        // Class for points ( Place of X & O ) , diferent game board actions along with play function. 
{
private:
	string point1;
	string point2;
	string point3;
	string point4;
	string point5;
	string point6;
	string point7;
	string point8;
	string point9;

public:
	Points();
	~Points();
	void setPoint(string points1, string points2, string points3, string points4, string points5, string points6, string points7, string points8, string points9);
	string getpoint1();
	string getpoint2();
	string getpoint3();
	string getpoint4();
	string getpoint5();
	string getpoint6();
	string getpoint7();
	string getpoint8();
	string getpoint9();

	void clearBoard();
	int gameOver();
	void drawBoard();
	void changePoint(int value, string letter);
	int playGame();
};


class Menu        // Small class for Menu in Home screen
{
public:
	void printMenu();
};


class Back		// Class for getting back to menu.
{
public:
	void backtoMain();

};


class textLoader		// Class for stream the file. i.e txt file. It load instructions for the game.
{
public:
	void Loader();
};


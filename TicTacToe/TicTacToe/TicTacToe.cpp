//
//  TicTacToe.cpp
//  Game
//
//  Created by Kafle D. Manish on 13/5/18.
//  Copyright © 2018 Kafle D. Manish. All rights reserved.
//

#include <stdio.h>
#include "TicTacToe.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

Points :: Points()        // Assigning values to different points.
{
	point1 = "1";
	point2 = "2";
	point3 = "3";
	point4 = "4";
	point5 = "5";
	point6 = "6";
	point7 = "7";
	point8 = "8";
	point9 = "9";
}

void Points :: setPoint (string points1, string points2, string points3, string points4, string points5, string points6, string points7, string points8, string points9)
{
	point1 = points1;
	point2 = points2;
	point3 = points3;
	point4 = points4;
	point5 = points5;
	point6 = points6;
	point7 = points7;
	point8 = points8;
	point9 = points9;
}

Points :: ~Points()		// Distructor 
{

}


string Points :: getpoint1() {
	return point1;
}

string Points::getpoint2() {
	return point2;
}
string Points::getpoint3() {
	return point3;
}
string Points::getpoint4() {
	return point4;
}
string Points::getpoint5() {
	return point5;
}string Points::getpoint6() {
	return point6;
}string Points::getpoint7() {
	return point7;
}
string Points::getpoint8() {
	return point8;
}
string Points::getpoint9() {
	return point9;
}


void Points::clearBoard()    
{
	point1 = "1";
	point2 = "2";
	point3 = "3";
	point4 = "4";
	point5 = "5";
	point6 = "6";
	point7 = "7";
	point8 = "8";
	point9 = "9";
}


// Function for Menu

void Menu::printMenu() {

	Points pG;     // Creating object to call function.

	int userChoice = 0;

	cout << "\n";
	cout << "\t\t*------------------------------------------------*" << "\n";
	cout << "\t\t~                   Welcome                      ~" << "\n";
	cout << "\t\t*------------------------------------------------*" << "\n";
	cout << "\n" << "\n";
	cout << "\t\t                Enter 1 : Play" << "\n";
	cout << "\t\t                Enter 2 : Instructions" << "\n";
	cout << "\t\t                Enter 3 : Quit" << "\n" << "\n" << "\n";
	cout << "\t\t==================================================" << "\n" << "\n";
	cout << "\t     *Note: First game is just for practice how to play the game*"<< "\n";
	cin >> userChoice;

	switch (userChoice) {
	case 1:
		system("cls");
		pG.playGame();
		break;

	case 2:
		system("cls");
		textLoader l;
		l.Loader();
		break;

	case 3 :
		exit(0);

	default:
		cout << "ERROR! You have Entered an invalid choice. Enter anything to quit !" << endl;
		system("pause");
		exit(0);
		break;
	}
}


// Back to Menu Function

void Back::backtoMain()
{


	int userChoice = 0;
	cout << "\t\t                Enter 4 : Back" << "\n";
	cin >> userChoice;

	switch (userChoice) {
	case 4:
		system("cls");
		Menu m;
		m.printMenu();
		break;

	default:
		cout << "ERROR! You have Entered an invalid choice." << endl;
		break;
	}

}


void textLoader :: Loader()
{
	string line;
	ifstream myfile("Instruction.txt");
	if (myfile.is_open())
	{
		cout << "\n";
		cout << "\t\t*------------------------------------------------*" << "\n";
		cout << "\t\t~                   Welcome                      ~" << "\n";
		cout << "\t\t*------------------------------------------------*" << "\n";

		while (!myfile.eof())
		{
			getline(myfile, line);
			cout << "  " << line << endl;
		}
		myfile.close();
		cout << "\t\t==================================================" << "\n" << "\n";
	}

	Back b;               // Creating object of Back to call the function.
	b.backtoMain();
}

int playerTurn = 1;



int Points :: gameOver()				// Function to show how the game is over with different conditions.
{
	if (point1 == point2 && point2 == point3)
		return 1;
	else if (point4 == point5 && point5 == point6)
		return 1;
	else if (point6 == point7 && point8 == point9)
		return 1;
	else if (point1 == point4 && point4 == point7)
		return 1;
	else if (point2 == point5 && point5 == point8)
		return 1;
	else if (point3 == point6 && point6 == point9)
		return 1;
	else if (point1 == point5 && point5 == point9)
		return 1;
	else if (point3 == point5 && point5 == point7)
		return 1;
	else if (point1 != "1" && point2 != "2" && point3 != "3" && point4 != "4" && point5 != "5" && point6 != "6" && point7 != "7" && point8 != "8" && point9 != "9")
		return 2;
	else
		return 0;
}


void Points :: changePoint(int value, string letter)  // Changes the point i.e 1, 2, 3 into X or O.
{
	if (value == 1 && point1 == "1") {
		point1 = letter;
	}
	else if (value == 2 && point2 == "2") {
		point2 = letter;
	}
	else if (value == 3 && point3 == "3") {
		point3 = letter;
	}
	else if (value == 4 && point4 == "4") {
		point4 = letter;
	}
	else if (value == 5 && point5 == "5") {
		point5 = letter;
	}
	else if (value == 6 && point6 == "6") {
		point6 = letter;
	}
	else if (value == 7 && point7 == "7") {
		point7 = letter;
	}
	else if (value == 8 && point8 == "8") {
		point8 = letter;
	}
	else if (value == 9 && point9 == "9") {
		point9 = letter;
	}
	else {
		cout << "The point you entered does not exit or already has already been taken" << endl;
		playerTurn--;
	}
}


void Points::drawBoard()   // Draws the board or game pannel with different points.
{

	cout << endl;

	cout << "\t\t\t\t\t\t   " << point1 << "  |  " << point2 << "  |  " << point3 << "  " << endl;
	cout << "\t\t\t\t\t\t -----------------" << endl;
	cout << "\t\t\t\t\t\t   " << point4 << "  |  " << point5 << "  |  " << point6 << "  " << endl;
	cout << "\t\t\t\t\t\t -----------------" << endl;
	cout << "\t\t\t\t\t\t   " << point7 << "  |  " << point8 << "  |  " << point9 << "  " << endl;

	cout << "\t\t\t\t ====================================================" << endl;

}


int Points :: playGame()
{
	Points d;       // Creating the object of Points as d then calling the function.
	d.drawBoard();

	int p1, p2;

	while (true) {
		if (playerTurn % 2 == 1) {
			cout << "\t\t\t\t\t       Player 1 it's your turn" << endl;
			cin >> p1;

			d.changePoint(p1, "X");

			d.drawBoard();

			if (d.gameOver() == 1) {
				cout << endl << endl << endl;
				cout << "\t\t\t\t\t       Player 1 is the winner!" << endl;
				cout << endl << endl;
				return 1;

			}
			else if (d.gameOver() == 2) {
				cout << endl << endl << endl;
				cout << "\t\t\t\t\t       It's a Tie! No winner" << endl;
				cout << endl << endl;
				return 0;
			}
			playerTurn++;

		}

		if (playerTurn % 2 == 0) {
			cout << "\t\t\t\t\t       Player 2 it's your turn" << endl;
			cin >> p2;
			d.changePoint(p2, "O");

			d.drawBoard();

			if (d.gameOver() == 1) {
				cout << endl << endl;
				cout << "\t\t\t\t\t       PLayer 2 is the winner!" << endl;
				cout << endl << endl;
				return 2;
				break;
			}
			else if (d.gameOver() == 2) {
				cout << endl << endl << endl;
				cout << "\t\t\t\t\t       It's a Tie! No winner" << endl;
				cout << endl << endl;
				return 0;
			}
			playerTurn++;
		}
	}
}

//
//  main.cpp
//  Game
//
//  Created by Kafle D. Manish on 13/5/18.
//  Copyright © 2018 Kafle D. Manish. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "TicTacToe.h"

using namespace std;

int main()
{
	Menu m;
	m.printMenu();
	Points s;

	char continueGame = '0';

	int player1 = 0;
	int * player1Pointer;				// Decrealing a pointer variable int. 
	player1Pointer = &player1;			// Assigning the address of the variable to pointer player1Pointer

	int	player2 = 0 ;
	int * player2Pointer;				// Decrealing a pointer variable int
	player2Pointer = &player2;			// Assigning the address of the variable to pointer player2Pointer

	int totalTies = 0;
	int * totalTiesPointer;				// Decrealing a pointer variable int
	totalTiesPointer = &totalTies;		// Assigning the address of the variable to pointer totalTiesPointer

	



	while (continueGame != 'q') {
		s.clearBoard();

		int winner = s.playGame();


		switch (winner) {
		case 1:
			player1++;
			break;
		case 2:
			player2++;
			break;
		case 0:
			totalTies++;
			break;
		}

		cout << "\t\t\t\t\t Player 1 you have won " << player1 << " time in this game." << endl;
		cout << "\t\t\t\t\t Player 2 you have won " << player2 << " time in this game." << endl;
		cout << "\t\t\t\t\t   This game has " << totalTies << " time tie in this game." << endl << endl;

		cout << "\t\t\t\t\t    To quit this game. Please Enter 'q' !" << endl;
		cout << "\t\t\t\t\t Please enter anything to continue the game !" << endl;
		cin >> continueGame;
	}


	cout << "\n";
	cout << "\t\t\t\t   **------------------------------------------------**" << "\n";
	cout << "\t\t\t\t   ||  Thank you for taking time. Hope you liked it  ||" << "\n";
	cout << "\t\t\t\t   **------------------------------------------------**" << "\n" << "\n";
	system("pause");


	// Deleting or Deallocation of int 
	delete player1Pointer;  
	delete player2Pointer;
	delete totalTiesPointer;


	return 0;
	
}

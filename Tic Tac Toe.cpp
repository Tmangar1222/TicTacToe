#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h> 

using namespace std;

void showboard();
void checkWin(char[3][3], string, string);
void checkDraw(char[3][3]);
const int ROW = 3;
const  int COL = 3;
char board[ROW][COL] = { { '*','*','*' },{ '*','*','*' },{ '*','*','*' } };
bool hasWon = false;
bool hasDrawn = false;

int main()
{
	string Player1;
	string Player2;
	int ROW = 3;
	int COL = 3;
	char Turn = 'X';
	int num = 0;


	cout << "Let's play Tic-Tac-Toe!\nPlayer 1 enter your name: ";
	cin >> Player1;
	cout << "\n";
	cout << Player1 << ", you are X's! You will also have the first turn. \n";


	cout << "Player 2, enter your name: ";
	cin >> Player2;
	cout << "\n";
	cout << Player2 << ", you are O's!\n";

	showboard();

	do
	{
		cout << "Choose the position: \nRow: ";
		cin >> ROW;
		cout << "Column: ";
		cin >> COL;
		if (board[ROW][COL] == '*') 
		{
			board[ROW][COL] = Turn;
			if (Turn == 'X')
				Turn = 'O';
			else
				Turn = 'X';
		}
		cout << endl;
		showboard();
        checkWin(board, Player1, Player2);
        


	} while (true);

	showboard();
    checkWin(board, Player1, Player2);
    checkDraw(board);

	return 0;
}

void showboard()
{
	cout << "     0   1   2";
	cout << endl << endl;
	cout << " 0  " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
	cout << "   ___|___|___\n";
	cout << " 1  " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
	cout << "   ___|___|___\n";
	cout << " 2  " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
	cout << "      |" << "   |" << endl;
}
void checkWin(char b[3][3], string p1, string p2)
{
    if (b[0][0] == 'X' && b[0][1] == 'X' && b[0][2] == 'X')
    {
        cout << p1 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[1][0] == 'X' && b[1][1] == 'X' && b[1][2] == 'X')
    {
        cout << p1 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[2][0] == 'X' && b[2][1] == 'X' && b[2][2] == 'X')
    {
        cout << p1 << " Wins! \n";
        hasWon = true;
        exit(0);
    }

    if (b[0][0] == 'X' && b[1][0] == 'X' && b[2][0] == 'X')
    {
        cout << p1 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[0][1] == 'X' && b[1][1] == 'X' && b[2][1] == 'X')
    {
        cout << p1 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[0][2] == 'X' && b[1][2] == 'X' && b[2][2] == 'X')
    {
        cout << p1 << " Wins! \n";
        hasWon = true;
        exit(0);
    }

    if (b[0][0] == 'X' && b[1][1] == 'X' && b[2][2] == 'X')
    {
        cout << p1 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[0][2] == 'X' && b[1][1] == 'X' && b[2][0] == 'X')
    {
        cout << p1 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[0][0] == 'O' && b[0][1] == 'O' && b[0][2] == 'O')
    {
        cout << p2 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[1][0] == 'O' && b[1][1] == 'O' && b[1][2] == 'O')
    {
        cout << p2 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[2][0] == 'O' && b[2][1] == 'O' && b[2][2] == 'O')
    {
        cout << p2 << " Wins! \n";
        hasWon = true;
        exit(0);
    }

    if (b[0][0] == 'O' && b[1][0] == 'O' && b[2][0] == 'O')
    {
        cout << p2 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[0][1] == 'O' && b[1][1] == 'O' && b[2][1] == 'O')
    {
        cout << p2 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[0][2] == 'O' && b[1][2] == 'O' && b[2][2] == 'O')
    {
        cout << p2 << " Wins! \n";
        hasWon = true;
        exit(0);
    }

    if (b[0][0] == 'O' && b[1][1] == 'O' && b[2][2] == 'O')
    {
        cout << p2 << " Wins! \n";
        hasWon = true;
        exit(0);
    }
    if (b[0][2] == 'O' && b[1][1] == 'O' && b[2][0] == 'O')
    {
        cout << p2 << " Wins! \n";
        hasWon = true;
        exit(0);
    }

}
void checkDraw(char b[3][3])
{
    if (b[0][0] != '1' && b[0][1] != '2' && b[0][2] != '3' && b[1][0] != '4' && b[1][1] != '5' && b[1][2] != '6' && b[2][0] != '7' && b[2][1] != '8' && b[2][2] != '9' && !hasWon)
        hasDrawn = true;
    if (hasDrawn)
    {
        cout << "\nThe game is a draw!\n\n";
        exit(0);
    }
}
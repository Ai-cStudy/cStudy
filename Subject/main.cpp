#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define SIZE 8
#define TRUE 1
#define FALSE 0
#define WHITE 3
#define BLACK 4

void initBoard();
void printBoard();
void setStonePosition();
int canPlaceStone(int row, int col);
void placeStone(int row, int col);
void changeTurn();
int hasPlaceStone(int targetTurn);
int isGameOver();
void printResult();

char board[SIZE][SIZE];
int checkBorad[SIZE][SIZE];
int turn = WHITE;

int main(void)
{
	initBoard();

	while (TRUE)
	{
		system("cls");
		printBoard();

		if (isGameOver())
		{
			printResult();
			break;
		}

		if (!hasPlaceStone(turn))
		{
			if (turn == WHITE)
				printf("\nWHITE cannot place stone. Turn skipped.\n");
			else
				printf("\nBLACK cannot place stone. Turn skipped.\n");

			changeTurn();
			Sleep(1500);
			continue;
		}

		setStonePosition();
		Sleep(1000);
	}

	return 0;
}

void initBoard()
{
	memset(board, '_', sizeof(board));
	memset(checkBorad, 0, sizeof(checkBorad));

	board[3][3] = 'W';
	board[3][4] = 'B';
	board[4][3] = 'B';
	board[4][4] = 'W';

	checkBorad[3][3] = WHITE;
	checkBorad[3][4] = BLACK;
	checkBorad[4][3] = BLACK;
	checkBorad[4][4] = WHITE;
}

void printBoard()
{
	int i;
	int j;

	printf("  0 1 2 3 4 5 6 7 X\n");

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (j == 0)
				printf("%d ", i);

			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

	printf("Y\n");

	if (turn == WHITE)
		printf("\nCURRENT TURN >> %c\n", 'W');
	else
		printf("\nCURRENT TURN >> %c\n", 'B');
}

void setStonePosition()
{
	int x;
	int y;

	printf("Stone Placement Position(x, y) >> ");
	scanf_s("%d %d", &x, &y);

	if (!(x >= 0 && x < SIZE && y >= 0 && y < SIZE))
	{
		printf("x, y Value out of range\n");
		return;
	}

	if (canPlaceStone(y, x))
	{
		placeStone(y, x);
		changeTurn();
	}
	else
	{
		printf("Cannot place stone\n");
	}
}

int canPlaceStone(int row, int col)
{
	int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	int dy[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
	int curX;
	int curY;
	int foundEnemy;
	int k;

	if (checkBorad[row][col] != 0)
		return FALSE;

	for (k = 0; k < SIZE; k++)
	{
		curX = row + dx[k];
		curY = col + dy[k];
		foundEnemy = FALSE;

		while (curX >= 0 && curX < SIZE && curY >= 0 && curY < SIZE)
		{
			if (checkBorad[curX][curY] == 0)
				break;

			if (checkBorad[curX][curY] != turn)
			{
				foundEnemy = TRUE;
			}
			else
			{
				if (foundEnemy == TRUE)
					return TRUE;

				break;
			}

			curX += dx[k];
			curY += dy[k];
		}
	}

	return FALSE;
}

void placeStone(int row, int col)
{
	int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	int dy[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
	int curX;
	int curY;
	int flipX;
	int flipY;
	int foundEnemy;
	int k;

	checkBorad[row][col] = turn;

	if (turn == WHITE)
		board[row][col] = 'W';
	else
		board[row][col] = 'B';

	for (k = 0; k < SIZE; k++)
	{
		curX = row + dx[k];
		curY = col + dy[k];
		foundEnemy = FALSE;

		while (curX >= 0 && curX < SIZE && curY >= 0 && curY < SIZE)
		{
			if (checkBorad[curX][curY] == 0)
				break;

			if (checkBorad[curX][curY] != turn)
			{
				foundEnemy = TRUE;
			}
			else
			{
				if (foundEnemy == TRUE)
				{
					flipX = row + dx[k];
					flipY = col + dy[k];

					while (flipX != curX || flipY != curY)
					{
						checkBorad[flipX][flipY] = turn;

						if (turn == WHITE)
							board[flipX][flipY] = 'W';
						else
							board[flipX][flipY] = 'B';

						flipX += dx[k];
						flipY += dy[k];
					}
				}

				break;
			}

			curX += dx[k];
			curY += dy[k];
		}
	}
}

void changeTurn()
{
	if (turn == WHITE)
		turn = BLACK;
	else
		turn = WHITE;
}

int hasPlaceStone(int EnemyTurn)
{
	int i;
	int j;
	int tempTurn;
	int result;

	tempTurn = turn;
	turn = EnemyTurn;
	result = FALSE;

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (canPlaceStone(i, j))
			{
				result = TRUE;
				break;
			}
		}

		if (result == TRUE)
			break;
	}

	turn = tempTurn;

	return result;
}

int isGameOver()
{
	if (!hasPlaceStone(WHITE) && !hasPlaceStone(BLACK))
		return TRUE;

	return FALSE;
}

void printResult()
{
	int i;
	int j;
	int whiteCount;
	int blackCount;

	whiteCount = 0;
	blackCount = 0;

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (checkBorad[i][j] == WHITE)
				whiteCount++;
			else if (checkBorad[i][j] == BLACK)
				blackCount++;
		}
	}

	printf("\nGAME OVER\n");
	printf("WHITE : %d\n", whiteCount);
	printf("BLACK : %d\n", blackCount);

	if (whiteCount > blackCount)
		printf("WHITE WIN\n");
	else if (blackCount > whiteCount)
		printf("BLACK WIN\n");
	else
		printf("DRAW\n");
}
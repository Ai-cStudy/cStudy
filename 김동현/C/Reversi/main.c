//#include <stdio.h>
//#include <windows.h>
//
//// 전처리
//#define SIZE 8
//
//// bool
//#define TRUE 1
//#define FALSE 0
//
//// 돌 색깔
//#define BLACK 0 // 'X'
//#define WHITE 1 // 'O'
//#define SPACE 2
//
//// 전역 변수
//char board[SIZE][SIZE];
//int checkBoard[SIZE][SIZE];
//int whoIsTurn = WHITE;
//int stoneCount[3];
//
//// 함수 선언
//void countStone(); // WHITE BLACK SPACE 갯수 계산 함수
//void resetBoard(); // 보드배열 초기화
//void printBoard(); // 보드 출력 함수
//void stoneMove();
//int canMove(int x, int y); // 더이상 둘곳없을때 턴넘기는함수
//
//int main(void) {
//
//	resetBoard();
//
//	while (TRUE)
//	{
//		system("cls");
//		printBoard();
//
//		// 게임 종료 조건
//		if (stoneCount[SPACE] == 0 || (canAnyMove(WHITE) == FALSE && canAnyMove(BLACK) == FALSE)) {
//			printWinner();
//			break;
//		}
//
//		// 현재 턴이 둘 곳 없으면 자동 턴 넘김
//		if (canAnyMove(whoIsTurn) == FALSE) {
//			printf("%s has no valid move. Turn pass.\n",
//				(whoIsTurn == WHITE) ? "WHITE" : "BLACK");
//
//			whoIsTurn = (whoIsTurn == WHITE) ? BLACK : WHITE;
//
//			Sleep(1000);
//			continue;
//		}
//
//		stoneMove();
//	}
//
//	return 0;
//}
//
//void countStone() {
//	for (int k = 0; k < 3; k++)
//		stoneCount[k] = 0;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			switch (checkBoard[i][j]) {
//			case BLACK:
//				stoneCount[BLACK]++;
//				break;
//			case WHITE:
//				stoneCount[WHITE]++;
//				break;
//			case SPACE:
//				stoneCount[SPACE]++;
//				break;
//			}
//		}
//	}
//}
//void resetBoard() {
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			board[i][j] = '-';
//			checkBoard[i][j] = SPACE;
//		}
//	}
//
//	board[3][3] = 'O';
//	board[4][4] = 'O';
//	board[3][4] = 'X';
//	board[4][3] = 'X';
//
//	checkBoard[3][3] = WHITE;
//	checkBoard[4][4] = WHITE;
//	checkBoard[3][4] = BLACK;
//	checkBoard[4][3] = BLACK;
//}
//
//void printBoard() {
//	printf("  0 1 2 3 4 5 6 7\n");
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			if (j == 0)
//				printf("%d ", i);
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//	countStone();
//	printf("WHITE : %d BLACK : %d SPACE : %d\n", stoneCount[WHITE], stoneCount[BLACK], stoneCount[SPACE]);
//	printf("Who is Turn >> %s\n", (whoIsTurn == WHITE) ? "WHITE" : "BLACK");
//}
//void stoneMove() {
//	int inputX, inputY;
//
//	int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
//	int dy[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
//
//	int opponent = (whoIsTurn == WHITE) ? BLACK : WHITE;
//	char stoneChar = (whoIsTurn == WHITE) ? 'O' : 'X';
//
//	printf("INPUT INDEX VALUE : ");
//	scanf_s("%d %d", &inputX, &inputY);
//
//	if (inputX < 0 || inputX >= SIZE || inputY < 0 || inputY >= SIZE) {
//		printf("X, Y Out of Range\n");
//		Sleep(1000);
//		return;
//	}
//
//	if (checkBoard[inputX][inputY] != SPACE) {
//		printf("This spot is already occupied.\n");
//		Sleep(1000);
//		return;
//	}
//
//	if (canMove(inputX, inputY) == FALSE) {
//		printf("Invalid move.\n");
//		Sleep(1000);
//		return;
//	}
//
//	// 일단 내가 둔 위치에 돌 놓기
//	checkBoard[inputX][inputY] = whoIsTurn;
//	board[inputX][inputY] = stoneChar;
//
//	// 8방향 뒤집기
//	for (int i = 0; i < 8; i++) {
//		int movX = inputX + dx[i];
//		int movY = inputY + dy[i];
//		int opponentCount = 0;
//
//		while (movX >= 0 && movX < SIZE && movY >= 0 && movY < SIZE) {
//
//			if (checkBoard[movX][movY] == opponent) {
//				opponentCount++;
//			}
//			else if (checkBoard[movX][movY] == whoIsTurn) {
//				if (opponentCount > 0) {
//					int flipX = inputX + dx[i];
//					int flipY = inputY + dy[i];
//
//					for (int k = 0; k < opponentCount; k++) {
//						checkBoard[flipX][flipY] = whoIsTurn;
//						board[flipX][flipY] = stoneChar;
//
//						flipX += dx[i];
//						flipY += dy[i];
//					}
//				}
//				break;
//			}
//			else {
//				break;
//			}
//
//			movX += dx[i];
//			movY += dy[i];
//		}
//	}
//	whoIsTurn = (whoIsTurn == WHITE) ? BLACK : WHITE;
//}
//
//int canMove(int x, int y) {
//	int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
//	int dy[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
//
//	int opponent = (whoIsTurn == WHITE) ? BLACK : WHITE;
//
//	if (checkBoard[x][y] != SPACE)
//		return FALSE;
//
//	for (int i = 0; i < 8; i++) {
//		int movX = x + dx[i];
//		int movY = y + dy[i];
//		int hasOpponent = FALSE;
//
//		while (movX >= 0 && movX < SIZE && movY >= 0 && movY < SIZE) {
//
//			if (checkBoard[movX][movY] == SPACE) {
//				break;
//			}
//
//			if (checkBoard[movX][movY] == opponent) {
//				hasOpponent = TRUE;
//			}
//			else if (checkBoard[movX][movY] == whoIsTurn) {
//				if (hasOpponent == TRUE)
//					return TRUE;
//				else
//					break;
//			}
//			movX += dx[i];
//			movY += dy[i];
//		}
//	}
//
//	return FALSE;
//}
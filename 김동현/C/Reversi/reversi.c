#include <stdio.h>
#include <windows.h>

#define SIZE 8
#define DIRECTION 8

#define TRUE 1
#define FALSE 0

#define SPACE 0
#define WHITE 1
#define BLACK 2

#define DRAW 3

int board[SIZE][SIZE];
int saveMove[DIRECTION];
int turn = WHITE;

void resetBoard();
void printBoard();
int canMove(int x, int y);
void changeStone(int x, int y);
void playTurn();
int hasAnyMove();
int whoIsWinner(int endGame);

int main() {
    int winner;
    int noMoveCount = 0;

    resetBoard();

    while (TRUE) {
        system("cls");
        printBoard();

        if (hasAnyMove() == FALSE) {
            noMoveCount++;

            if (noMoveCount == 2) {
                printf("BOTH PLAYERS HAVE NO MOVE.\n");
                winner = whoIsWinner(TRUE);

                if (winner == WHITE)
                    printf("WHITE WIN\n");
                else if (winner == BLACK)
                    printf("BLACK WIN\n");
                else if (winner == DRAW)
                    printf("DRAW\n");

                break;
            }

            printf("NO MOVE. TURN PASS.\n");
            Sleep(500);
            continue;
        }

        noMoveCount = 0;   // 둘 수 있으면 카운트 초기화
        playTurn();

        winner = whoIsWinner(FALSE);
        if (winner)
        {
            if (winner == WHITE)
                printf("WHITE WIN\n");
            else if (winner == BLACK)
                printf("BLACK WIN\n");
            else if (winner == DRAW)
                printf("DRAW\n");
            break;
        }

        Sleep(500);
    }

    return 0;
}
void resetBoard() {
    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            board[y][x] = SPACE;
        }
    }

    board[3][3] = WHITE;
    board[4][4] = WHITE;
    board[3][4] = BLACK;
    board[4][3] = BLACK;
}

void printBoard() {
    printf("  0 1 2 3 4 5 6 7 X\n");

    for (int y = 0; y < SIZE; y++) {
        printf("%d ", y);

        for (int x = 0; x < SIZE; x++) {
            switch (board[y][x]) {
            case SPACE:
                printf("_ ");
                break;
            case WHITE:
                printf("O ");
                break;
            case BLACK:
                printf("X ");
                break;
            }
        }

        printf("\n");
    }

    printf("Y\n");

    if (turn == WHITE)
        printf("CURRENT TURN: WHITE(O)\n");
    else
        printf("CURRENT TURN: BLACK(X)\n");
}

int canMove(int x, int y) {
    int dx[DIRECTION] = { 0, 1, 1, 1, 0, -1, -1, -1 };
    int dy[DIRECTION] = { 1, 1, 0, -1, -1, -1, 0, 1 };

    int currentTurn = turn;
    int enemyTurn = (turn == WHITE) ? BLACK : WHITE;

    int possible = FALSE;

    int moveX;
    int moveY;
    int count;

    // 범위 밖이면 불가능
    if (x < 0 || x >= SIZE || y < 0 || y >= SIZE)
        return FALSE;

    // 이미 돌이 있으면 불가능
    if (board[y][x] != SPACE)
        return FALSE;

    for (int idx = 0; idx < DIRECTION; idx++) {
        saveMove[idx] = 0;

        moveX = x + dx[idx];
        moveY = y + dy[idx];
        count = 0;

        // 먼저 상대 돌이 연속으로 나와야 함
        while (moveX >= 0 && moveX < SIZE && moveY >= 0 && moveY < SIZE) {
            if (board[moveY][moveX] == enemyTurn) {
                count++;
            }
            else if (board[moveY][moveX] == currentTurn) {
                // 상대 돌을 하나 이상 지나고 내 돌을 만나야 유효
                if (count > 0) {
                    saveMove[idx] = count;
                    possible = TRUE;
                }
                break;
            }
            else {
                // 빈칸이면 실패
                break;
            }

            moveX += dx[idx];
            moveY += dy[idx];
        }
    }

    return possible;
}

void changeStone(int x, int y) {
    int dx[DIRECTION] = { 0, 1, 1, 1, 0, -1, -1, -1 };
    int dy[DIRECTION] = { 1, 1, 0, -1, -1, -1, 0, 1 };

    int currentTurn = turn;

    board[y][x] = currentTurn;

    for (int idx = 0; idx < DIRECTION; idx++) {
        int moveX = x + dx[idx];
        int moveY = y + dy[idx];

        for (int idx2 = 0; idx2 < saveMove[idx]; idx2++) {
            board[moveY][moveX] = currentTurn;

            moveX += dx[idx];
            moveY += dy[idx];
        }
    }

    // 턴 변경
    turn = (turn == WHITE) ? BLACK : WHITE;
}

void playTurn() {
    int inputX, inputY;

    printf("INPUT X Y : ");
    scanf_s("%d %d", &inputX, &inputY);

    if (canMove(inputX, inputY) == TRUE) {
        changeStone(inputX, inputY);
    }
    else {
        printf("NOT POSSIBLE.\n");
    }
}

int hasAnyMove() {
    int enemyTurn = (turn == WHITE) ? BLACK : WHITE;
    
    for (int y = 0; y < SIZE; y++)
    {
        for (int x = 0; x < SIZE; x++)
        {
            if (canMove(x, y) == TRUE)
                return TRUE;
        }
    }

    turn = enemyTurn;
    return FALSE;
}
int whoIsWinner(int endGame) {
    int winner;
    int whitestone = 0;
    int blackstone = 0;
    int space = 0;
    
    for (int y = 0; y < SIZE; y++)
    {
        for (int x = 0; x < SIZE; x++)
        {
            switch (board[x][y])
            {
            case WHITE: 
                whitestone++;
                break;
            case BLACK:
                blackstone++;
                break;
            case SPACE:
                space++;
                break;
            }
        }
    }

    if (endGame == FALSE)
    {
        if (space > 0)
            winner = SPACE; // SPACE가 0이라서 그냥 하나라도 비어있으면 0 리턴
        else if (whitestone > blackstone)
            winner = WHITE;
        else if (whitestone < blackstone)
            winner = BLACK;
        else if (whitestone == blackstone)
            winner = DRAW;
    }
    else
    {
        if (whitestone > blackstone)
            winner = WHITE;
        else if (whitestone < blackstone)
            winner = BLACK;
        else if (whitestone == blackstone)
            winner = DRAW;
    }

    return winner;
}
#include <iostream>
#include <string>    // 책 제목, 저자 이름 같은 문자열
#include <vector>    // 여러 권의 책을 저장
#include <algorithm> // 검색이나 정렬 기능
#include <fstream>   // 파일 읽기와 쓰기

using namespace std;

void showMenu();                                                         // 메뉴출력
void loadBooks(string books[]);                                          // CSV 파일에서 책 목록 불러오기
void searchBook(const string books[], int bookCount, char alphabet);     // 입력한 알파벳으로 시작하는 책 출력
string bookTitle(ifstream &file, string title);                          // 공백제거+ 대문자,소문자 통일
int searchTitle(const string books[], int bookCount, string inputTitle); // 책 제목 검색

void showMenu()
{
    cout << "알파벳으로 찾기";
    cout << "책 제목으로 검색";
    cout << "종료";
}
void loadBooks(string books[])
{
    ifstream file("book.csv");
    string bookName;
    while (getline(file, bookName))
    {
        cin >> bookName;
    }
    file.close();
}
void searchBook(const string books[], int bookCount, char alphabet)
{
    cin >> alphabet;
    for (int i = 0; i < 30; i++)
    {
        if (books[i][0] == alphabet) // i번째 책에서 0번째 문자
        {
            cout << books[i];
            bookCount++;
        }
    }
    cout << bookCount;
}
string bookTitle(string books[])
{
    while (true)
    {
        for (char ch : books[30]) // 문자열에서 글자를 하나씩 꺼냄
        {
            if (ch != ' ')
            {
                cout << ch;
            }
        }

        cout << endl;
    }

    return title;
}
int searchTitle(const string books[], int bookCount, string inputTitle)
{
    cin >> inputTitle;
    for (int i = 0; i < 30; i++)
    {
        bookTitle(file("book.csv"), books[i]);
    }
}
int main()
{
    int num;
    string books[30];
    int bookCount;
    char alphabet;
    string inputTitle;
    showMenu();
    cin >> num;
    switch (num)
    {
    case 1:
        searchBook(books, bookCount, alphabet);
        break;
    case 2:
        searchTitle(books, bookCount, inputTitle);
        break;
    case 3:
        break;
    }
    return 0;
}

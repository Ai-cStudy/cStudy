#include <iostream>   // cout, cin을 사용하기 위한 입출력 라이브러리
#include <fstream>    // ifstream을 사용하여 파일을 읽기 위한 라이브러리
#include <string>     // string 자료형을 사용하기 위한 라이브러리
#include <vector>     // vector 동적 배열을 사용하기 위한 라이브러리
#include <cctype>     // toupper(), tolower() 함수를 사용하기 위한 라이브러리
using namespace std;  // std::cout, std::string처럼 std::를 반복해서 쓰지 않기 위한 선언

// 책 한 권의 정보를 저장하는 클래스
class Book {
private:
    // 책 제목을 저장하는 멤버 변수
    string title;

public:
    // Book 객체를 만들 때 책 제목을 받아 저장하는 생성자
    Book(const string& title) {
        this->title = title;    //객체의 title = 외부에서 전달받은 title; java의 this.title과 동일.
    }

    // 저장된 책 제목을 반환하는 함수
    string getTitle() const {
        return title;
    }

    // 책 제목이 사용자가 입력한 알파벳으로 시작하는지 확인하는 함수
    bool startsWith(char keyword) const {
        // 제목이 비어 있으면 비교할 수 없으므로 false 반환
        if (title.empty()) {
            return false;
        }

        // 책 제목의 첫 글자를 대문자로 변환
        char firstLetter = toupper(title[0]);

        // 사용자가 입력한 문자도 대문자로 변환
        char searchLetter = toupper(keyword);

        // 두 문자가 같으면 true, 다르면 false 반환
        return firstLetter == searchLetter;
    }

    // 제목 검색을 위해 책 제목에서 공백을 제거하고 소문자로 바꾼 문자열을 반환하는 함수
    string getNormalizedTitle() const {
        // 변환된 제목을 저장할 문자열
        string normalized = "";

        // 제목의 각 문자를 하나씩 확인
        for (char ch : title) {
            // 공백 문자가 아니면
            if (ch != ' ') {
                // 소문자로 변환해서 normalized에 추가
                normalized += tolower(ch);      //tolower 함수는 cctype 라이브러리의 함수로 대문자를 소문자로 치환하는 기능을 한다.
            }
        }

        // 공백이 제거되고 소문자로 변환된 제목 반환
        return normalized;
    }
};

// 여러 권의 책을 저장하고 검색 기능을 제공하는 클래스
class Library {
private:
    // Book 객체들을 저장하는 vector
    vector<Book> bookList;

    // 사용자가 입력한 검색어에서 공백을 제거하고 소문자로 바꾸는 함수
    string normalizeKeyword(const string& keyword) const {
        // 변환된 검색어를 저장할 문자열
        string normalized = "";

        // 검색어의 각 문자를 하나씩 확인
        for (char ch : keyword) {
            // 공백 문자가 아니면
            if (ch != ' ') {
                // 소문자로 변환해서 normalized에 추가
                normalized += tolower(ch);
            }
        }

        // 공백이 제거되고 소문자로 변환된 검색어 반환
        return normalized;
    }

public:
    // 파일에서 책 제목을 읽어 bookList에 저장하는 함수
    bool loadBooksFromFile(const string& fileName) {
        // 입력 파일 스트림 생성
        ifstream file(fileName);

        // 파일이 정상적으로 열리지 않았을 경우
        if (!file.is_open()) {
            cout << "파일을 열 수 없습니다: " << fileName << "\n";
            return false;
        }

        // 파일에서 한 줄씩 읽은 책 제목을 저장할 변수
        string title;

        // 파일의 내용을 한 줄씩 끝까지 읽음
        while (getline(file, title)) {
            // 빈 줄이 아니면
            if (!title.empty()) {
                // 읽어온 제목으로 Book 객체를 생성해 bookList에 저장
                bookList.push_back(Book(title));
            }
        }

        // 파일 사용이 끝났으므로 닫음
        file.close();

        // 파일 읽기 성공을 의미하는 true 반환
        return true;
    }

    // 사용자가 입력한 알파벳으로 시작하는 책을 출력하는 함수
    void searchByFirstLetter(char keyword) const {
        // 검색된 책 개수를 저장하는 변수
        int count = 0;

        // 전체 책 목록을 순회하며 조건에 맞는 책 개수를 먼저 계산
        for (const Book& book : bookList) {
            if (book.startsWith(keyword)) {
                count++;
            }
        }

        // 알파벳 구역과 검색된 책 개수 출력
        cout << "[" << static_cast<char>(toupper(keyword)) << " 구역] - 총 " << count << "권" << "\n";

        // 전체 책 목록을 다시 순회하면서 조건에 맞는 책 제목 출력
        for (const Book& book : bookList) {
            if (book.startsWith(keyword)) {
                cout << book.getTitle() << "\n";
            }
        }

        // 검색된 책이 하나도 없을 경우 안내 문구 출력
        if (count == 0) {
            cout << "해당 알파벳으로 시작하는 책이 없습니다." << "\n";
        }
    }

    // 사용자가 입력한 책 제목이 존재하는지 검색하는 함수
    void searchByTitle(const string& keyword) const {
        // 사용자가 입력한 검색어를 공백 제거 + 소문자 형태로 변환
        string normalizedKeyword = normalizeKeyword(keyword);

        // 전체 책 목록을 순회하며 검색어와 같은 책이 있는지 확인
        for (const Book& book : bookList) {
            // 책 제목과 검색어를 같은 기준으로 변환한 뒤 비교
            if (book.getNormalizedTitle() == normalizedKeyword) {
                // 일치하는 책이 있으면 원래 책 제목 형태로 출력
                cout << "FIND: " << book.getTitle() << "\n";
                return;
            }
        }

        // 끝까지 찾지 못하면 NOT FOUND 출력
        cout << "NOT FOUND" << "\n";
    }
};

int main() {
    // 도서관 객체 생성
    Library library;

    // books.txt 파일에서 책 목록을 읽어옴
    // 파일을 열지 못하면 프로그램을 비정상 종료 코드 1로 종료
    if (!library.loadBooksFromFile("books.txt")) {
        return 1;
    }

    // 사용자가 선택한 메뉴 번호를 저장할 변수
    int menu;

    // 알파벳 검색과 제목 검색이 실행된 총 횟수를 저장할 변수
    int searchCount = 0;

    // 사용자가 3번 종료 메뉴를 선택할 때까지 반복
    while (true) {
        // 메뉴 출력
        cout << "\n";
        cout << "1. 알파벳으로 찾기" << "\n";
        cout << "2. 책 제목 검색" << "\n";
        cout << "3. 종료" << "\n";
        cout << "메뉴 선택: ";

        // 메뉴 번호 입력
        cin >> menu;

        // cin 입력 뒤에 남아 있는 엔터 문자를 제거
        cin.ignore();

        // 1번 메뉴: 알파벳으로 책 찾기
        if (menu == 1) {
            // 검색할 알파벳을 저장할 변수
            char keyword;

            // 사용자에게 알파벳 입력받기
            cout << "검색할 알파벳 입력: ";
            cin >> keyword;

            // cin 입력 뒤에 남아 있는 엔터 문자를 제거
            cin.ignore();

            // 입력한 알파벳으로 시작하는 책 검색
            library.searchByFirstLetter(keyword);

            // 검색 횟수 1 증가
            searchCount++;
        }
        // 2번 메뉴: 책 제목으로 검색
        else if (menu == 2) {
            // 검색할 책 제목을 저장할 변수
            string title;

            // 공백이 포함된 책 제목 입력을 받기 위해 getline 사용
            cout << "검색할 책 제목 입력: ";
            getline(cin, title);

            // 입력한 제목과 일치하는 책 검색
            library.searchByTitle(title);

            // 검색 횟수 1 증가
            searchCount++;
        }
        // 3번 메뉴: 프로그램 종료
        else if (menu == 3) {
            // 프로그램 종료 전에 총 검색 횟수 출력
            cout << "총 검색 횟수: " << searchCount << "\n";
            break;
        }
        // 1, 2, 3 이외의 값을 입력했을 경우
        else {
            cout << "잘못된 메뉴입니다." << "\n";
        }
    }

    // 프로그램 정상 종료
    return 0;
}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

//struct information {
//	int no;
//	char name[20];
//	char phoneNumber[20];
//	char eMail[30];
//	char address[50];
//
//};
//typedef struct information Information; //typedef는 자료형을 내가 원하는 이름으로 변경 가능하다. struct information이 자료형이니까 다 쓰기 싫어서 Information으로 바꿔버림
//typedef char int8; 캐릭터형을 int8로 바꿔서 자주 씀 (임베디드!)

//struct information {
//	int no;
//	char name[20];
//	char phoneNumber[20];
//	char eMail[30];
//	char address[50];
//
//}info1,info2; 구조체를 만들면서 변수를 바로 설정할 수도 있다!!

//typedef struct information {
//	int no;
//	char name[20];
//	char phoneNumber[20];
//	char eMail[30];
//	char address[50];
//
//}Information;

//typedef struct {
//	int no;
//	char name[20];
//	char phoneNumber[20];
//	char eMail[30];
//	char address[50];
//
//}Information;

//struct point {
//	int x;
//	int y;
//	char *name;
//};
//
//struct information setInfo(struct information info);
//
//struct Node {
//	int data;
//	struct Node* next;
//};
//typedef struct Node Node;


//
//int main(void) {
	//struct information info1;
	//info1.no = 1;
	//struct information info2 = { 1,"Elly","010-1234-5678","chanhwi9829@naver.com","Busan" };
	//struct information info3[100];
	//Information info4; //자료형의 이름을 바꿨기 때문에 변수 선언할 때 바뀐 이름을 사용할 수 있다.


	//info3[0].no = 1;


	//setInfo(info1);

	//printf("%d\n", info1.no);
	//printf("%s\n", info1.name);   //	printf("%s\n", &info1.name[0]); 와 동일하다!!

	//struct point p1;
	//struct point p2;

	//p1.x = 10;
	//p1.y = 20;
	//p1.name = (char*)malloc(sizeof(char) * 20);
	//strcpy(p1.name, "chan-ni");

	//p2.x = p1.x;
	//p2.y = p1.y;
	//p2.name = (char*)malloc(sizeof(char) * 20);
	//strcpy(p2.name, "Tae-Woo");

	//p2 = p1; 

	//printf("%d %d", p2.x, p2.y);
	// 
	//노드 3개 생성
	//Node* n1 = (Node*)malloc(sizeof(Node));
	//Node* n2 = (Node*)malloc(sizeof(Node));
	//Node* n3 = (Node*)malloc(sizeof(Node));

	////데이터 저장
	//n1->data = 10;
	//n2->data = 20;
	//n3->data = 30;

	////연결
	//n1->next = n2;
	//n2->next = n3;
	//n3->next = NULL;


	////출력
	//Node* cur = n1;

	//while (cur != NULL) {
	//	printf("%d -> ", cur->data);
	//	cur = cur->next;
	//}
	//printf("NULL\n");

	//return 0;
//}

//struct information setInfo(struct information info) {
//	info.no = 1;
//	strcpy(info.name, "cha-ni");    //strcpy(&info.name[0], "cha-ni"); 과 같은 표현이다!!   변수 선언 후 , 초기화 해주려면 strcpy 함수를 꼭 사용해야한다!
//	strcpy(info.phoneNumber, "010-4440-7086");
//
//	return info;
//}



//1. 학생관리 프로그램을 만들어보자. 아래 정보에 맞게
//- 학생을 한 명씩 추가하는 기능
//- 저장된 정보를 출력하는 기능
//- 저장된 정보를 파일로 저장하는 기능
//- 파일로 저장된 정보를 다시 프로그램으로 읽어오는 기능

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <math.h>
//#pragma warning (disable :4996)
//
//void printMenu() {
//	printf("1.Add a student\n");
//	printf("2.Print all student information\n");
//	printf("3.Save a file\n");
//	printf("4.Load from a file\n");
//	printf("5.Exit\n");
//}
//
//struct information {
//	int index = 0;
//	char name[20];
//	int stdNum;
//	char phoneNum[20];
//	char address[50];
//}info1;
//typedef struct information Information;
//
//void addStudent(Information info);
//void printStudent(Information);
//
//int main(void) {
//	int userNum;
//	printMenu;
//	scanf("%d", &userNum);
//	while (userNum != 5) {
//		if (userNum == 1) {
//			addStudent(info1);
//		}
//		else if (userNum == 2) {
//			printStudent(info1);
//		}
//		else if (userNum == 3) {
//
//		}
//		else if (userNum == 4) {
//
//		}
//	}
//	
//
//	return 0;
//}
//void addStudent(Information info) {
//
//	printf("Input Student's name : ");
//	scanf("%s", info.name[info.index]);
//	printf("Input Student's number : ");
//	scanf("%d", info.stdNum);
//	printf("Input Student's phone number : ");
//	scanf("%s", info.phoneNum[info.index]);
//	printf("Input Student's address : ");
//	scanf("%s", info.address[info.index]);
//	info.index++;
//}
//void printStudent(Information info) {
//	for (int i = 0; info.name[i] != NULL; i++){
//		printf("The Student's name is %s: \n", info.name[i]);
//		printf("The Student's phone number is : %s\n", info.phoneNum[i]);
//		printf("The Student's address is : %s\n", info.address[i]);
//		printf("\n");
//	}
//}

//2. 두 점 사이의 거리를 계산하는 프로그램을 만들어보자
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//struct point {
//	int x;
//	int y;
//};
//
//double Way(struct point p1, struct point p2);
//int main(void) {
//	struct point p1;
//	struct point p2;
//	printf("Input p1's point :");
//	scanf("%d %d", &p1.x, &p1.y);
//	printf("Input p2's point :");
//	scanf("%d %d", &p2.x, &p2.y);
//	printf("%.2f",Way(p1, p2));
//
//
//}
//double Way(struct point p1, struct point p2) {
//	double result;
//	result = sqrt(pow(p2.x - p1.x,2)  + pow(p2.y - p1.y,2));
//	return result;
//}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable : 4996)
struct score {
	char name[20];
	int score_kor;
	int score_math;
	int score_eng;

}score_per[20];

int main(void) {
	FILE* f = fopen("./score.csv", "rt");
	FILE* f1 = fopen("./total_score.csv", "wt");
	int idx = 0;
	

	while (fscanf(f, "%[^,], %d, %d, %d", score_per[idx].name, &score_per[idx].score_kor, &score_per[idx].score_math, &score_per[idx].score_eng) == 4) {
		//printf("%s %d %d %d\n", score_per[idx].name, score_per[idx].score_kor, score_per[idx].score_math, score_per[idx].score_eng);
		int sum = score_per[idx].score_kor + score_per[idx].score_math + score_per[idx].score_eng;
		float ave = sum / 3.0;
		fprintf(f1, "%s, %d, %d, %d, %d, %f", score_per[idx].name, score_per[idx].score_kor, score_per[idx].score_math, score_per[idx].score_eng, sum, ave);
		idx++;
	}
	


	fclose(f);
	fclose(f1);

	return 0;
}
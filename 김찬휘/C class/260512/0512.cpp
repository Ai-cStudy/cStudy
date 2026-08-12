#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

void myStrcpy(char* dest, char* src);
int myStrlen(char* str);
void printAnimals(char (*animals)[10]);

int main(int argc, char* argv[]) {

	char s[20];
	//if (fgets(s, 20, stdin) != NULL) {
	//	printf("s = %s", s);
	//}

	//char animals[5][10] = { "Dog","Cat","Racoon","Duck","Iguana" };
	//strcpy(animals[0], "Dog");
	//strcpy(animals[1], "Cat");
	//strcpy(animals[2], "Racoon");
	//strcpy(animals[3], "Duck");
	//strcpy(animals[4], "Iguana");

	//printAnimals(animals);

	//char a[] = "Hello";
	//char b[] = "World";
	//char c[] = "Wow";

	//int a = 1;
	//int b = 2;
	//int c = 3;

	//int* parr[3];

	//parr[0] = &a;
	//parr[1] = &b;
	//parr[2] = &c;

	//char str[5] = "1234";
	//char str2[7] = "12.345";

	//int num = atoi(str);

	//char str1[] = "Hello";
	//char str2[] = "Hello";

	//if (strcmp(str1, str2) == 0)
	//	printf("Its Same");
	//else
	//	printf("Different");

	//int arr[100];

	//for (int i = 0; i < 100;i++) {
	//	arr[i] = '\0';
	//}

	//memset(arr, NULL, sizeof(arr));

	//printf("%d %d %d", arr[0], arr[1], arr[2]);

	//char str1[100] = "Hello";
	//char str2[] = "World";

	//strcat(str1, str2);

	//printf("%s\n", str1);

	//char line[100];
	//char word1[20];
	//char word2[20];
	//char word3[20];

	//memset(line, NULL, sizeof(line));
	//FILE* f = fopen("score.csv", "rt");

	////fprintf(f, ",JiYoon,SangWoo\n");
	////fprintf(f, "Score,50,55\n");
	//fgets(line, sizeof(line), f);
	//fscanf(f, "%s %s %s\n", word1, word2, word3);
	//printf("%s\n", word1);
	//
	//fclose(f);

	//printf("The number of parameters : %d\n", argc);
	//for (int i = 1; i < argc;i++) {
	//	printf("%s ", argv[i]);
	//}
	//printf("\n");

	//if (argc < 2) {
	//	printf("Need More parameters\n");
	//	return 1;
	//}

	////3*4배열 만들기
	//int row = atoi(argv[1]);
	//int col = atoi(argv[2]);
	//int count = 1;

	//int** array = (int**)malloc(sizeof(int*) * col);
	//for (int i = 0;i < col;i++) {
	//	array[i] = (int*)malloc(sizeof(int) * row);
	//}
	//for (int i = 0;i < col; i++) {
	//	for (int j = 0;j < row;j++) {
	//		array[i][j] = count++;
	//		printf("%d ", array[i][j]);
	//	}
	//	printf("\n");
//}
//1번 문제. 
	//FILE* f = fopen("tel.csv", "rt");
	//char name[20];
	//char number[20];
	//char user_name[10];
	//
	//printf("Input name : ");
	//scanf("%s", user_name);
	//
	//for (int i = 0;i < 4;i++) {
	//	fscanf(f, "%[^,], %s ", .exname, number);
	//	//printf("%s %s", name, number);
	//	if(strcmp(user_name,name)==0)
	//		printf("%s", number);
	//}
	//fclose(f);

//2번 문제

//char name[20];
//char number[20];
//
//	FILE* f = fopen(argv[1], "rt");
//	FILE* a = fopen(argv[2], "wt");
//
//	for (int i = 0; i < 4;i++) {
//		fscanf(f, "%[^,], %s ", name, number);
//		fprintf(a, "%s , %s\n", name, number);
//		
//	}
//	
//
//	fclose(f);
//	fclose(a);

//3번 문제


	
	





	

	
	return 0;
}
void myStrcpy(char* dest, char* src) {
	int srcLen = myStrlen(src);
	for (int i = 0; i < srcLen; i++) {
		dest[i] = src[i];
	}
}
int myStrlen(char* str) {
	int i = 0;
	for (i = 0;str[i] != '\0';i++)

	return i;
}
void printAnimals(char (*animals)[10]) {
	printf("%s\n", animals[0]);
	printf("%s\n", animals[1]);

}

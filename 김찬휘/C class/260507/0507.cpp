#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void printArr(int* arr, int num);
void userNum(int* num);
void userArr(int* arr, int num);
int binarySearch(int* arr, int start, int num, int answer);
int scanNum(int* num);



int main(void) {

	int user_num;
	int user_arr[100];
	int arr_num;
	userNum(&user_num);
	userArr(user_arr, user_num);
	scanNum(&arr_num);
	binarySearch(user_arr, 0,user_num,arr_num);
	printArr(user_arr, user_num);

	



	
	return 0;
}
void printArr(int* arr, int num) {
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
}
void userNum(int* num) {
	printf("Input Array count : ");
	scanf("%d", num);
	if (*num < 1 || *num>100)
		userNum(num);
}
void userArr(int* arr, int num) {
	printf("Input Array number : ");
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
}

int binarySearch(int* arr,int start, int num,int answer) {
	for (int i = start;i < num/2;i++) {
		if (arr[i] == answer)
			return i;
		else
			binarySearch(arr, num / 2 + 1, num, answer);
	}
}
int scanNum(int* num) {
	printf("Input Answer in Array :");
	scanf("%d", num);
	return *num;
}

//삽입정렬
//정수 N개가 주어졌을 때, 삽입 정렬을 이용하여 오름차순으로 정렬하는 프로그램을 작성하시오.

int main(void)
{
	int arr[10];
	int i = 0;
	int size = sizeof(arr) / sizeof(int);
	

	printf("input 5 number : ");

	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < size; i++)
	{
		int min = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > min)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = min;
	}

	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}
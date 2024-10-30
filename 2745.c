#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int a, k= 0, num, result = 0;
	char arr[100];
	scanf_s("%s %d", &arr, 100, &a);
	for (int i = strlen(arr) - 1; i >= 0; i--)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			num = arr[i] - 'A' + 10;
		}
		else
		{
			num = arr[i] - '0';
		}
		result += num * pow(a, k++);
	}

	printf("%d ", result);
}

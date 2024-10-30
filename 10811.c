#include <stdio.h>

int main()
{
	int n, m, arr[100], a, b, k = 0;
	scanf_s("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < m; i++)
	{
		scanf_s("%d %d", &a, &b);
		k = 0;
		for (int i = a - 1; i <= b - 1; i++)
		{
			while (1)
			{
				if ((a + k == b - k) || (a + k - 1== b - k))
				{
					break;
				}
				int temp;
				temp = arr[i + k];
				arr[i + k] = arr[b - 1 - k];
				arr[b - 1 - k] = temp;
				k++;
			}
		}
		for (int h = 0; h < n; h++)
		{
			printf("%d ", arr[h]);
		}
		printf("\n");
	}
	
}

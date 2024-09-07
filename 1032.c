#include <stdio.h>
#include <string.h>

int main()
{
	int N, len = 0, result = 0;
	char cmd[50][50];
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf_s("%s", &cmd[i], 50);
		len = strlen(cmd[i]);
	}
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (cmd[i - 1][j] != cmd[i][j])
			{
				cmd[i][j] = '?';
				result = i;
			}
		}
	}
	printf("%s", cmd[result]);
}
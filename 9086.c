#include <stdio.h>
#include <string.h>

int main()
{
	int num, len;
	char input[1000];
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf_s("%s", &input, 1000);
		len = strlen(input);
		printf("%c%c\n", input[0], input[len-1]);
	}
}

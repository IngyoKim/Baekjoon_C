#include <stdio.h>

//float���� ���� ���� �����ϴµ� double�� �� ������ ������ ������ ��Ȯ�� �𸣰ڴ�...
int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%.20f", (double)A / B);
}
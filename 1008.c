#include <stdio.h>

//float으로 했을 때는 실패하는데 double로 할 때에는 괜찮은 이유는 정확히 모르겠음
int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%.20f", (double)A / B);
}

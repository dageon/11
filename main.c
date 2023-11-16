#include <stdio.h>

int main(void) {
	int i;
	int grade[5];
	int sum;
	
	for(i=0;i<5;i++)
	{
		printf("input value (%i) = ", i);
		scanf("%d", &grade[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum += *(grade+i);
		printf("grade[%i] = %d\n", i, *(grade+i));
	}
	
	printf("\n average : %d\n", sum/5);
	
	return 0;
}

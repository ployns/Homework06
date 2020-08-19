#include<stdio.h>
int main()
{
	int a;
	printf("Hight : ");
	scanf_s("%d", &a);
	if (a >= 0) {
		if (a >= 100 && a < 140)
			printf("very small\n");
		else if (a >= 140 && a < 155)
			printf("small\n");
		else if (a >= 155 && a < 165)
			printf("normal\n");
		else
			printf("tall\n");
	}
	else {
		printf("error\n");
		printf("Try again");
	}
	printf("Thank you");
}
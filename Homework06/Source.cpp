#include<stdio.h>
int main()
{
	int a;
	printf("Hight : ");
	scanf_s("%d", &a);
	if (a >= 60) {
		if (a >= 60 && a < 140)
			printf("very small\n");
		else if (a >= 140 && a < 155)
			printf("small\n");
		else if (a >= 155 && a < 165)
			printf("normal\n");
		else if (a >= 165 && a < 250)
			printf("tall\n");
	}
	else {
		printf("error\n");
		printf("Try again\n");
	}
	printf("Thank you");
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

void judge(int a)
{
	int i = 0;
	for (i = 1; i <a; i++)
	{
		if (a % i == 0&&i!=1)
		{
			printf("֥ʿ����");
			break;
		}
	};
	if (i == a)
		printf("֥ʿ����");
}
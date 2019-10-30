#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("Vvedite massiv\n");
	int k = 10;
	int a[10];
	int flag = 1;
	for (int i = 0; i < k; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; (i < k - 1) && (flag == 1); i++)
	{
		flag = 0;
		for (int j = 0; j < k - i - 1; j++)
		{
			if (a[j + 1] < a[j])
			{
				int b = a[j + 1];
				a[j + 1] = a[j];
				a[j] = b;
				flag = 1;
			}
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

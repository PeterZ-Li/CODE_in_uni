#include<stdio.h>
int main(void)
{
	int n, i, a[100], k, b[100];
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{	
		scanf("%d", &a[i]);
		getchar();
	}	
	for (i = 0; i < n; i++)
	{
		while (a[i] > 1)
		{
			k = 2;
			if (a[i] % k == 0)a[i] = a[i] / k;
			else k++;
			if (a[i] == k)b[i] = k;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (b[i] <= 5)
			printf("%d ", a[i]);
	}
	return 0;
}
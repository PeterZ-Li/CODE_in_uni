#include<stdio.h>
int main(void)
{
	int n, i, k, m;
	scanf("%d", &n);
	int a[1000] = { 0 }; int b[100];
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &b[i]);
		k = b[i] % 10;
		a[k]++;
	}
	for (m = 0; m < n; m++)
	{
		if (a[m] == 1)
			{printf("%d", a[m]); break;}
        else ;    
	}
	return 0;
}

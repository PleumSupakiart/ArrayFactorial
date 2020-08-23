#include<stdio.h>
#include<math.h>
int main()
{
	int i, length;
	printf("Enter number of data : ");
	scanf("%d", &length);

	int Factorial[length];
	for (i = 1; i <= length; i++)
	{
		printf("\nData [%d] = ", i);
		int a;
		int sum = 1;
		printf("Factorial of : ");
		scanf("%d", &a);
		printf("1");
		for (int i = 2; i <= a; i++)

		{
			printf(" x %d ", i);
			sum *= i;
		}
		printf("\nFactorial of %d is %d\n\n", a, sum);

	}


	return 0;
}
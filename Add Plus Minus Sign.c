#include <stdio.h>
#include <string.h>
int main()
{
	int TestCase = 0;
	printf("Enter the number of TestCase:\t");
	scanf("%d", &TestCase);

	for (int a = 0; a < TestCase; a++)
	{
		printf("\nEnter the size of String:\t");
		int n = 0;
		scanf("%d", &n);

		char str[n];
		scanf("%s", str);
		for (int b = 0; b < n; b++)
		{
			int count = 0;
			if (b == 0)
			{
				count = count + (str[b]-48);
                printf("%d", count);
            }
            if (str[b] == '1' && count == 1)
			{
				printf("-");
				count = count - str[b]-48;
			}
			else if (str[b] == '1' && count == 0)
			{
				printf("+");
				count = count - str[b]-48;
			}w
			else if (str[b] == '0')
			{
				printf("+");
				count = count + str[b]-48;
			}
		}
	}
}

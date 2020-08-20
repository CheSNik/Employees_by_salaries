/*Chekhonin Sergei Team 5*/
/*Module 11 Lab 8*/

/*This program counts employees by range of those salaries*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 9 /*a. The array should be 100 in length.*/
#define SENTINEL -999
#define BASESALARY 200


int main()
{
	int arr[SIZE] = { 0 };
	double	salary = 0; /**/
	int sales = 0;

	enum range {
		$200_to_299 = 0,
		$300_to_399,
		$400_to_499,
		$500_to_599,
		$600_to_699,
		$700_to_799,
		$800_to_899,
		$900_to_999,
		$1000and_more
	};

	printf("Please enter gross integer sales of sales person\n");
	printf("To end input enter -999\n");
	printf("Enter employee sales: ");

	scanf("%d", &sales);
	while (sales != SENTINEL)
	{
		salary = BASESALARY + 0.09 * sales;
		if (200 <= salary && salary <= 299)
			arr[$200_to_299]++;
		else if (300 <= salary && salary <= 399)
			arr[$300_to_399]++;
		else if (400 <= salary && salary <= 499)
			arr[$400_to_499]++;
		else if (500 <= salary && salary <= 599)
			arr[$500_to_599]++;
		else if (600 <= salary && salary <= 699)
			arr[$600_to_699]++;
		else if (700 <= salary && salary <= 799)
			arr[$700_to_799]++;
		else if (800 <= salary && salary <= 899)
			arr[$800_to_899]++;
		else if (900 <= salary && salary <= 999)
			arr[$900_to_999]++;
		else
			arr[$1000and_more]++;
		printf("Enter employee sales: ");
		scanf("%d", &sales);
	}

		printf("$ 200 - 299: %d\n", arr[$200_to_299]);
		printf("$ 300 - 399: %d\n", arr[$300_to_399]);
		printf("$ 400 - 499: %d\n", arr[$400_to_499]);
		printf("$ 500 - 599: %d\n", arr[$500_to_599]);
		printf("$ 600 - 699: %d\n", arr[$600_to_699]);
		printf("$ 700 - 799: %d\n", arr[$700_to_799]);
		printf("$ 800 - 899: %d\n", arr[$800_to_899]);
		printf("$ 900 - 999: %d\n", arr[$900_to_999]);
		printf("$ 1000 and more: %d\n", arr[$900_to_999]);

	return 0;
}


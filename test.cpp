/*
#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int side1, side2, side3, side4, tmp, rec, area, per;

	printf("Enter sides in order: \n"); //стороны 4-угольника вводятся по порядку
	scanf("%d %d %d %d", &side1, &side2, &side3, &side4);

	if (side1 <= 0 || side2 <= 0 || side3 <= 0 || side4 <= 0)
	{
		printf("Invalid value!");
		return 1;
	}

	rec = ((side1 == side3) && (side2 == side4)) ? 1 : 0; // проверка на существование прямоугольника

	for (int i = 0; i < 4; i++) // <--миллениалы придумали баблсорт
	{
		if (side1 > side2)
		{
			tmp = side1;
			side1 = side2;
			side2 = tmp;
		}
		if (side2 > side3)
		{
			tmp = side2;
			side2 = side3;
			side3 = tmp;
		}
		if (side3 > side4)
		{
			tmp = side3;
			side3 = side4;
			side4 = tmp;

		}	
	}
	printf("%d %d %d %d\n", side1, side2, side3, side4);


	if (side4 < side1 + side2 + side3) //проверка на существование 4-угольника
	{
		printf("Quadrilateral exists!\n\n");
		
		if (rec)
		{
			printf("It's probably a rectangle!\n\n");
			area = side1 * side4;
			per = 2 * (side1 + side4);
			if (side1 == side2 && side2 == side3)
				printf("It's probably a square!\n\n");
			printf("Area: %d\nPerimetr: %d\n", area, per);
		}
		
	}
	else
		printf("Quadrilateral does not exist!\n");
	




	return 0;
}
*/
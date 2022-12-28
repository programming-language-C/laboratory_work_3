#include <iostream>
#define PCH_H
#include <stdio.h>
#include <conio.h>
//программа табулирования функции
//y(x)=A*(1-x)^2-exp(x)/2
int main()
{
	setlocale(0, "Rus");
	float A, x, y, maxy, maxx, miny, minx;
	for (A = 1; A <= 3; A += 0.8)
	{
		//напечатай число А как целое(d) с точностью до 3 знаков
		printf("при\t А=%3d\n", (int)A);
		maxy = 0 - A * sin(0);
		maxx = 0;
		miny = -maxy;

		printf("-----------------------\n");
		for (x = 0.2; x < 1.2; x += 0.2)
		{
			y = A * pow(1 - x, 2) - exp(x) / 2; // A*(1-x)^2-exp(x)/2;
			// х как число с точной с точностью до 3 знаков после запятой
			printf("|x= %4.3f  y = %7.2f|\r\n", x, y);
			if (y > maxy)
			{
				maxy = y;
				maxx = x;
			}
			if (y < miny)
			{
				miny = y;
				minx = x;
			}
		}
		printf("-----------------------\n*************\n");
		printf("\n maxy=%7.2f\n", maxy);
		printf("\n maxx=%4.3f\n", maxx);
		printf("\n miny=%7.2f\n", miny);
		printf("\n minx=%4.3f\n", minx);
		printf("==============\n");
		wprintf(L"для продолжения -");
		wprintf(L"нажмите клавишу \n ");
		_getch();
	}
}

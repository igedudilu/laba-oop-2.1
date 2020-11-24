#include <iostream>
#include <conio.h>
#include "Point.h"

using namespace std;

void Point::randomc() {
	y = rand() % 20;
	x = rand() % 20;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	{
		printf("Статическое создание и удаление\n");
		Point p;
		Point p2(10, 20);
		Point p3(p2);
		p3.move(1, 2);
		p2.randomc();


	}
	printf("Конец\n");
	printf("\n");
	{
		printf("Динамичское создание и удаление\n");
		Point* p = new Point;
		Point* p2 = new Point(10, 20);
		Point* p3 = new Point(*p2);
		p3->move(1, 2);
		p2->randomc();
		delete p;
		delete p2;
		delete p3;

	}
	printf("Конец\n");






	return 0;

}


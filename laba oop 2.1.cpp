#include <iostream>
#include <conio.h>
using namespace std;

class Point {
public:
	int x, y;
	Point() {
		printf("Point()\n");
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		printf("Point(int x, int y)\n");
		this->x = x;
		this->y = y;
	}
	Point(const Point& p) {
		printf("Point(const Point&p)\n");
		x = p.x;
		y = p.y;
	}
	~Point() {
		printf("%d, %d\n", x, y);
		printf("~Point()\n");
	}
	void move(int x, int y) {
		this->x += x;
		this->y += y;
	}
	void randomc();

};

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


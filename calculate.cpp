#include <iostream>
using namespace std;

double rec(int width, int height)
{
	double rec = width * height;
	return rec;
}
double tri(int width, int height)
{
	double tri = 0.5*(width * height);
	return tri;
}
double dia(int width, int height)
{
	double dia= 0.5*(width * height);
	return dia;
}

int main(void)
{
	int width, height;
	double(*Figurearea[3])(int width, int height);

	Figurearea[0] = rec;
	Figurearea[1] = tri;
	Figurearea[2] = dia;

	cout << ">> Width : ";
	cin >> width;
	cout << ">> Height : ";
	cin >> height;
	cout << endl;

	cout << "Area of the rectangle : " << Figurearea[0](width, height) << endl;
	cout << "Area of the triangle : " << Figurearea[1](width, height) << endl;
	cout << "Area of the diamond : " << Figurearea[2](width, height) << endl;

	return 0;
}
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	double cathetus1, cathetus2, hypotenuse, height;

	cout << "This algorithm will solve your right-angle triangle geometry problems based on what values you assign." << endl;
	cout << "If you don't have a value for one of the sides, assign '0'." << endl;
	cout << "Please assign cathetus1's value: ";
	cin >> cathetus1;

	cout << "Please assign cathetus2's value: ";
	cin >> cathetus2;

	cout << "Please assign the hypotenuse's value: ";
	cin >> hypotenuse;

	cout << "Please assign the height's value: ";
	cin >> height;

	if (cathetus1 == 0)
	{
		double cathetus1(pow(hypotenuse, 2) - pow(cathetus2, 2));
		cout << "Cathetus1 is equal to: " << cathetus1 << ".";
		cout << endl;

		double perimeter(cathetus1 + cathetus2 + hypotenuse);
		cout << "The perimeter is equal to: " << perimeter << "." << endl;
	}
	else if (cathetus2 == 0)
	{
		double cathetus2(pow(hypotenuse, 2) - pow(cathetus1, 2));
		cout << "Cathetus2 is equal to: " << cathetus2 << ".";
		cout << endl;

		double perimeter(cathetus1 + cathetus2 + hypotenuse);
		cout << "The perimeter is equal to: " << perimeter << "." << endl;
	}
	else if (hypotenuse == 0)
	{


		cout << "The hypotenuse is equal to: " << hypotenuse << ".";
		cout << endl;

		double perimeter(cathetus1 + cathetus2 + hypotenuse);
		cout << "The perimeter is equal to: " << perimeter << "." << endl;
	}
	else
	{
		double perimeter(cathetus1 + cathetus2 + hypotenuse);
		cout << "The perimeter is equal to: " << perimeter << "." << endl;
	}

	double area(height * hypotenuse / 2);
	cout << "The area is equal to: " << area << "." << endl;

	return 0;
	cout << endl;
}

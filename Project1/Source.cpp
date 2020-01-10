//Noël Walker
//This is my own work
//In class exercise 1/8/2020
#include <iostream>
using namespace std;
//int main() {
//
//	float pound;
//	float kilogram;
//	cout << "Enter a number in pounds to convert it to kilograms: ";
//	cin >> pound;
//	kilogram = 0.454 * pound;
//	cout << "This would be " << kilogram << " kilograms." << endl;
//
//	return 0;
//}

//int main() {
//
//	float side;
//	float area;
//	cout << "Enter a single side of a hexagon to calculate the area: ";
//	cin >> side;
//	area = 1.5 * sqrt(3) * pow(side, 2);
//	cout << "The area of the hexagon would be " << area << " units squared." << endl;
//
//	return 0;
//}

int main() {

	int int1;
	int int2;
	cout << "Please enter a single integer value: ";
	cin >> int1;
	cout << endl;
	cout << "Please enter another integer value: ";
	cin >> int2;
	if (int1 > int2) {
		cout << "The first integer '" << int1 << "' is larger.";
	}
	else
		cout << "The second integer '" << int2 << "' is larger.";

	return 0;
}
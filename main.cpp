#include <iostream>
#include <conio.h>
#include <Windows.h>
int main() {

	double height, weight, bmi;
	
	SetConsoleTitle("BMI rechner");
	std::cout << "Sag mir deine Koerpergroesse (m): "; // in meter 
	std::cin >> height;

	std::cout << "Sag mir dein Gewicht (kg): "; // in kg
	std::cin >> weight;

	// gewicht * höhe²
	bmi = weight / (height * height);

	std::cout << "Dein BMI ist " << bmi << "\n"; // ausgabe 
	std::cout << "  \n";
	std::cout << "Sorgen kann man teilen. https://www.telefonseelsorge.de/ \n";
	_getch();

}
#include <iostream>
#include "enums.h"

int main()
{
	Color paint = COLOR_BLACK;
	Color apple{ COLOR_RED };
	Animal TheBest{ ANIMAL_DOG };

	std::cout << "The best animal in the world is: ";
	if (TheBest == 1)
		std::cout << "A Dog!" << std::endl;

	std::cout << "Choose your Race!\n" << "0: Human \n" << "1: Orc \n" << "2: Elf\n" << "3: Dwarf \n" << std::endl;
	int userRace{};
	std::cin >> userRace;
	Race UserRace = static_cast<Race>(userRace);

	if (UserRace == 0)
		std::cout << "You chose the race of Human!" << std::endl;
	else if (UserRace == 1)
		std::cout << "You chose the race of Orc!" << std::endl;
	else if (UserRace == 2)
		std::cout << "You chose the race of Elf!" << std::endl;
	else if (UserRace == 3)
		std::cout << "You chose the race of Dwarf!" << std::endl;
	else
		std::cout << "You didn't choose a valid race!" << std::endl;


	std::cout << "Enter a color for the house! (0 through 7)" << std::endl;
	int inputColor{};
	std::cin >> inputColor;
	Color house = static_cast<Color>(inputColor);

	if (house == COLOR_BLACK)
		std::cout << "Black!";
	else if (house == COLOR_RED)
		std::cout << "Red!";
	else if (house == COLOR_BLUE)
		std::cout << "Blue!";
	else if (house == COLOR_GREEN)
		std::cout << "Green!";
	else if (house == COLOR_WHITE)
		std::cout << "White!";
	else if (house == COLOR_CYAN)
		std::cout << "Cyan!";
	else if (house == COLOR_YELLOW)
		std::cout << "Yellow!";
	else if (house == COLOR_MAGENTA)
		std::cout << "Magenta!";
	else
		std::cout << "No valid color assigned?";

	return 0;
}
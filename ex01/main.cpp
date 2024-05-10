//
// Created by jules on 10/05/2024.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "Creating object using default constructor..." << std::endl;
	ScavTrap trap1;
	trap1.guardGate(); // Call ScavTrap method (Add more class-specific methods if needed)

	std::cout << "\nCreating object using parameterized constructor..." << std::endl;
	ScavTrap trap2("ScavTrap_2");
	trap2.guardGate();

	std::cout << "\nCreating copy using copy constructor..." << std::endl;
	ScavTrap trap3 = trap2;
	trap3.guardGate();

	std::cout << "\nAssigning using assignment operator..." << std::endl;
	ScavTrap trap4;
	trap4 = trap2;
	trap4.guardGate();

	std::cout << "\nEnd of Test!" << std::endl;
	return 0;
}
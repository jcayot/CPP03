//
// Created by jules on 10/05/2024.
//

#include "ClapTrap.hpp"

int main()
{
	// Creating an instance using name constructor
	ClapTrap robot1("Robot");

	// Creating an instance using default constructor
	ClapTrap robot2;

	// Testing copy constructor by creating a new instance
	ClapTrap robot3 = robot1;

	// Testing operator= usage
	robot2 = robot1;

	// Testing attack method
	robot1.attack("enemy");

	// Testing takeDamage and beRepaired methods
	robot1.takeDamage(5);
	robot1.beRepaired(5);
	robot1.takeDamage(8);
	robot1.takeDamage(2);

	return 0;
}
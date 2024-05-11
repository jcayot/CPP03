//
// Created by jules on 10/05/2024.
//

#include "FragTrap.hpp"

int main()
{
	// Creating instance A
	FragTrap a("A");
	a.highFivesGuys();   // Expect: "FragTrap A says high five!"

	// Creating instance B and assigning it to A
	FragTrap b("B");
	a = b;
	a.highFivesGuys();   // Expect: "FragTrap B says high five!"

	// Creating instance C from copy constructor
	FragTrap c(a);
	c.highFivesGuys();   // Expect: "FragTrap B says high five!"

	return 0;
}

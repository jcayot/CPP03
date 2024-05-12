//
// Created by jules on 10/05/2024.
//

#include "DiamondTrap.hpp"

int main() {
	// Create a DiamondTrap named DiamondTest
	DiamondTrap dt("DiamondTest");

	// Have the DiamondTrap attack a target
	dt.attack("Target");

	// Display the DiamondTrap's identity
	dt.whoAmI();

	return 0;
}

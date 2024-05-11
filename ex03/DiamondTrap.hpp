//
// Created by Jules Cayot on 5/11/24.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string	name;

	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &diamondTrap);
		~DiamondTrap();

		DiamondTrap &operator=(const DiamondTrap &other);

		void	whoAmI(void);
};


#endif //DIAMONDTRAP_HPP

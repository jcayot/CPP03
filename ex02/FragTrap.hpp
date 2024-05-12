//
// Created by jules on 10/05/2024.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : ClapTrap {
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &other);
		~FragTrap();

		FragTrap &operator=(const FragTrap &other);

		void	highFivesGuys(void);
		void	attack(const std::string &target);
};


#endif //FRAGTRAP_HPP

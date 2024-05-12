//
// Created by jules on 10/05/2024.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() : FragTrap("") {
	std::cout << "FragTrap " << name << " default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " name constructor called" << std::endl;
	this -> hitPoints = 100;
	this -> energyPoints = 100;
	this -> attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	ClapTrap::operator=(other);
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " says high five!" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (hitPoints > 0 && energyPoints > 0) {
		energyPoints--;
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage
				  << " points of damage!" << std::endl;
	}
}

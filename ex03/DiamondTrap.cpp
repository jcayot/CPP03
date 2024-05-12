//
// Created by Jules Cayot on 5/11/24.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : DiamondTrap("") {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name") {
	std::cout << "DiamondTrap " << name << " name constructor called" << std::endl;
	this -> name = name ;
	this -> hitPoints = 100;
	this -> energyPoints = 50;
	this -> attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) : ClapTrap(diamondTrap), FragTrap(diamondTrap), ScavTrap(diamondTrap) {
	this -> name = diamondTrap.name;
	std::cout << "DiamondTrap " << this -> name << " copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	ClapTrap::operator=(other);
	this -> name = other.name;
	return (*this);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "I am " << this->name << " but I am also : " << ScavTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

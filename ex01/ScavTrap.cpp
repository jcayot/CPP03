//
// Created by jules on 10/05/2024.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ScavTrap("") {
	std::cout << "ScavTrap " << name << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " name constructor called" << std::endl;
	this -> hitPoints = 100;
	this -> energyPoints = 50;
	this -> attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	ClapTrap::operator=(other);
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

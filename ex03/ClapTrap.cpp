//
// Created by jules on 10/05/2024.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : ClapTrap("") {
	std::cout << "ClapTrap " << name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) {
	std::cout << "ClapTrap " << name << " name constructor called" << std::endl;
	this -> name = name;
	this -> hitPoints = 10;
	this -> energyPoints = 10;
	this -> attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	*this = clapTrap;
	std::cout << "ClapTrap " << name << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	if (this != &clapTrap) {
		this->name = clapTrap.name;
		this->hitPoints = clapTrap.hitPoints;
		this->energyPoints = clapTrap.energyPoints;
		this->attackDamage = clapTrap.attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (hitPoints > 0 && energyPoints > 0) {
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage
				  << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints > 0) {
		if (amount >= hitPoints) {
			hitPoints = 0;
			std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and is destroyed!"
					  << std::endl;
		} else {
			hitPoints -= amount;
			std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints > 0 && energyPoints > 0) {
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
	}
}

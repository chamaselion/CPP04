/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:44:40 by bszikora          #+#    #+#             */
/*   Updated: 2025/06/19 16:01:23 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal named constructor called\n";
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "Animal assignment operator called\n";
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

// void Animal::makeSound() const
// {
// 	std::cout << "I might have made a sound, but nobody was there to hear it. So did I make a sound?\n";
// }

std::string Animal::getType() const { return this->type; }
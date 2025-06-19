/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:29:58 by bszikora          #+#    #+#             */
/*   Updated: 2025/06/19 15:41:30 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& other) : Animal("Dog")
{
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Dog assignment operator called\n";
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Good boy goes loudly: \"Woof! Woof!\"\n";
}

Brain* Dog::getBrain() const
{
    return this->brain;
}

void Dog::setBrain(const Brain& newBrain)
{
    *this->brain = newBrain;
}
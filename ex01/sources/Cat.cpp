/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:38:04 by bszikora          #+#    #+#             */
/*   Updated: 2025/06/19 15:41:29 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& other): Animal("Cat")
{
	this->brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Cat assignment operator called\n";
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called\n";
}
void	Cat::makeSound(void) const
{
	std::cout << "Sassy cat goes gently: \"Meoow, Meoow\"\n";
}

Brain* Cat::getBrain() const
{
    return this->brain;
}

void Cat::setBrain(const Brain& newBrain)
{
    *this->brain = newBrain;
}
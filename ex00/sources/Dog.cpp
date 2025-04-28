/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:29:58 by bszikora          #+#    #+#             */
/*   Updated: 2025/04/28 18:37:02 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
	}
	std::cout << "Dog assignment operator called\n";
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

void Dog::Animal::makeSound()
{
	std::cout << "Good boy goes loudly: \"Woof! Woof!\"\n";
}
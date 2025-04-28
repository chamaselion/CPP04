/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:38:04 by bszikora          #+#    #+#             */
/*   Updated: 2025/04/28 18:43:41 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
	}
	std::cout << "Cat assignment operator called\n";
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}
void	Cat::Animal::makeSound()
{
	std::cout << "Sassy cat goes gently: \"Meoow, Meoow\"\n";
}
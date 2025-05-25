/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:38:04 by bszikora          #+#    #+#             */
/*   Updated: 2025/05/25 15:37:18 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& other): Animal("Cat")
{
	std::cout << "Cat copy constructor called\n";
	(Cat) other;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Cat assignment operator called\n";
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}
void	Cat::makeSound(void) const
{
	std::cout << "Sassy cat goes gently: \"Meoow, Meoow\"\n";
}
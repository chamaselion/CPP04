/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 15:57:35 by bszikora          #+#    #+#             */
/*   Updated: 2025/06/19 15:00:26 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) { std::cout << "WrongCat copy constructor called\n"; }

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << "WrongCat assignment operator called\n";
    return *this;
}

WrongCat::~WrongCat() { std::cout << "WrongCat destructor called\n"; }

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat makes a generic sound\n";
}
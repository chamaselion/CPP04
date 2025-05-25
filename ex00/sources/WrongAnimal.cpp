/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 15:53:42 by bszikora          #+#    #+#             */
/*   Updated: 2025/05/25 16:01:02 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") { std::cout << "WrongAnimal default constructor called\n"; }
WrongAnimal::WrongAnimal(std::string type) : type(type) { std::cout << "WrongAnimal named constructor called\n"; }
WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) { std::cout << "WrongAnimal copy constructor called\n"; }

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
        type = other.type;
    std::cout << "WrongAnimal assignment operator called\n";
    return *this;
}

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor called\n"; }

void WrongAnimal::makeSound() const { std::cout << "WrongAnimal makes a generic sound\n"; }

std::string WrongAnimal::getType() const { return type; }
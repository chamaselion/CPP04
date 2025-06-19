/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:15:08 by bszikora          #+#    #+#             */
/*   Updated: 2025/05/25 17:17:14 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called\n";
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			if (other.ideas[i].length() > 0)
				this->ideas[i].assign(other.ideas[i]);
		}
		
	}
	std::cout << "Brain assignment operator called\n";
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}
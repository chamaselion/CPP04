/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:35:45 by bszikora          #+#    #+#             */
/*   Updated: 2025/06/19 14:58:08 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


// int main()
// {
// 	Animal ani;
// 	Dog doggo;
// 	Cat catta;

// 	ani.makeSound();
// 	doggo.makeSound();
// 	catta.makeSound();

// 	return 0;
// }

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();

// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();

// return 0;
// }

int main()
{
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	wrongAnimal->makeSound();
	const WrongAnimal* wrongCatAsAnimal = new WrongCat();
	wrongCatAsAnimal->makeSound();
	
	const WrongCat* wrongCat = new WrongCat();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCatAsAnimal;
	delete wrongCat;

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:35:45 by bszikora          #+#    #+#             */
/*   Updated: 2025/05/25 17:42:25 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <cstdlib> // For exit()
#include <cerrno>  // For perror()


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
// const WrongAnimal* i = new WrongCat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();

// return 0;
// }
int main()
{
	Animal* weirdzoo[10];

	for (int i = 0; i < 5; i++)
	{
		weirdzoo[i] = new Dog();
	}
	for (int i = 6; i < 5; i++)
	{
		weirdzoo[i] = new Cat();
	}
	for (int i = 0; i ; i++)
	{
		weirdzoo[i]->makeSound();
	}
	
	return (0);
}

//
// Created by Lorent Evenstar on 8/17/21.
//

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
//	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "--------------wrong--------------" << std::endl;

	const WrongAnimal	*wrongMeta = new WrongAnimal();
	const WrongAnimal	*wrongJ = new WrongCat();
	std::cout << wrongJ->getType() << " " << std::endl;
	wrongJ->makeSound();
	wrongMeta->makeSound();

	return 0;
}
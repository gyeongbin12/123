#include "Keyboard.h"

Keyboard::Keyboard()
{
	std::cout << "Keyboard ������" << std::endl;
}

void Keyboard::Input(char character)
{
	this->character = character;

	std::cout << character << std::endl;
}

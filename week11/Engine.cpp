#include<string>
#include "CarPart.h"
#include"Engine.h"

Engine::Engine() {
	power = 200;
}

void Engine::display() const {
	baseDisplay();
	std::cout << power << " Pistons:" << std::endl;
	size_t size = pistons.size();
	for (size_t i = 0; i < size; i++) {
		pistons[i].display();
	}
}
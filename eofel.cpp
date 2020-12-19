#include "eofel.h"

Eofel::Eofel() {
	window.create(
	    sf::VideoMode(width, height),
	    "SFML"
	);
}

Eofel::~Eofel() {
	
}

int Eofel::show() {
	while (window.isOpen()) {
		sf::Event event{};
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			Eofel::process(event);
		}
		window.clear(sf::Color::Cyan);
		window.display();
	}
}

void Eofel::process(sf::Event event) {
	
}


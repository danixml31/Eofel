#ifndef EOFEL_H
#define EOFEL_H

#include <SFML/Graphics.hpp>

class Eofel : public sf::RenderWindow {
	
public: 
	Eofel();
	~Eofel();
	
	
public: 
    int show();
    void process(sf::Event event);
	
private: 
	sf::RenderWindow window;
	
private:
    const int width = 800;
    const int height = 400;
};

#endif
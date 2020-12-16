#include <SFML/Graphics.hpp>

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 800, 32), "SFML window", sf::Style::Fullscreen | sf::Style::Close);    
    // Create a graphical text to display
    sf::Font font;
    // If this font doesn't exist on your system, this will not work
    if (!font.loadFromFile("/system/fonts/AndroidClock.ttf"))
        return EXIT_FAILURE;
    sf::Text text("Hello SFML", font, 50);
    // Center the text
    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.left + textRect.width/2.0f, textRect.top + textRect.height/2.0f);
    text.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width/2.0f,sf::VideoMode::getDesktopMode().height/2.0f)); 
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if ((event.type == sf::Event::Closed) || (event.type == sf::Event::KeyPressed))
                window.close();
        }
        // Clear screen
        window.clear(sf::Color(50, 200, 50));
        // Draw the string
        window.draw(text);
        // Update the window
        window.display();
    }
    return EXIT_SUCCESS;
}
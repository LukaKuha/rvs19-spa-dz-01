#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow* window)
{
    this->window = window;
}

void Cvijet::draw() {

    sf::CircleShape sunce(50.f);
    sunce.setFillColor(sf::Color::Yellow);
    sunce.setPosition(500.f, 50.f);
   
    sf::CircleShape glava(50.f);
    glava.setFillColor(sf::Color::Red);
    glava.setPosition(300.f, 200.f); 

   
    sf::ConvexShape latica;
    latica.setPointCount(4); 
    latica.setPoint(0, sf::Vector2f(320.f, 200.f)); 
    latica.setPoint(1, sf::Vector2f(400.f, 300.f));
    latica.setPoint(2, sf::Vector2f(320.f, 400.f));
    latica.setPoint(3, sf::Vector2f(240.f, 300.f));
    latica.setFillColor(sf::Color::Yellow);
    latica.move(30.f, -50.f);


    
    sf::RectangleShape stabiljka(sf::Vector2f(20.f, 200.f)); 
    stabiljka.setFillColor(sf::Color::Green); 
    stabiljka.setPosition(325.f, 350.f); 
    stabiljka.move(15.f, -50.f);

 
    sf::RectangleShape list(sf::Vector2f(60.f, 20.f));
    list.setFillColor(sf::Color::Green);
    list.setPosition(345.f, 270.f);


    window->draw(sunce);
    window->draw(stabiljka);
    window->draw(latica);
    window->draw(glava);
    window->draw(list);
}
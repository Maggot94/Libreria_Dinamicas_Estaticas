/*********** lIBRERIA ESTATICA OPENSOURCE****************/
#include <SFML/Graphics.hpp>


int main()
{

/*********** dECLARACION DE FUENTE PARA TEXTO ****************/
   sf::Font font;
   if (!font.loadFromFile("fuente.tff"))
    {
    //error

   }
/*********** DECLARACION DE TEXTO ****************/
    sf::Text text;

    text.setFont(font);

    text.setString("Libreria Estatica");

    text.setCharacterSize(3000.f);

    text.setFillColor(sf::Color::White);

    text.setStyle(sf::Text::Bold);
/*********** VENTANA DE RENDER ****************/
    sf::RenderWindow window (sf::VideoMode(500,500), "SFML works!");
/*********** CIRCULO RENDERIZADO ****************/
    sf::CircleShape shape(100.f);

    shape.setFillColor(sf::Color::Red);

   while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(text);
        window.display();
    }

    return 0;
}

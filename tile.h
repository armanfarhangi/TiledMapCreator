//Arman Farhangi
//August 5, 2015
//Tiled Map Creator
//Tile head

#ifndef __game__tile__
#define __game__tile__

#include <SFML/Graphics.hpp>
//sprite.setTextureRect(sf::IntRect(widthProgress, heightProgress, tileWidth, tileHeight));
class Tile : public sf::Sprite
{
public:
    Tile();
    Tile(int ID);
    int getID();
    int x;
    int y;
private:
    int ID;
};

#endif
